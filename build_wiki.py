from kattis_download.main import get_soup, parse_soup
from pathlib import Path

root = Path(".")

euler = root / "project-euler"
kattis = root / "kattis"

wiki = root / "wiki"
wiki.mkdir(mode=0o777, exist_ok=True)

solution_base = "https://github.com/bradendubois/competitive-programming/blob/master"

# kattis

kattis_data = []

for directory in filter(lambda x: x.is_dir(), kattis.iterdir()):

    solution = directory / "README.md"
    print(solution)
    with solution.open("r") as f:
        contents = f.read().strip()

    data = parse_soup(get_soup(directory.name))
    data['id'] = directory.name

    for file in directory.iterdir():
        if file.is_file() and file.stem == directory.name:
            data['solution'] = file.suffix

    assert 'solution' in data, directory.name

    kattis_data.append(data)
    full_contents = f"# {data['title']}\n\nID: {directory.name}\n\nDifficulty: {data['difficulty']}\n\nCPU Time: {data['cpu']}\n\nMemory: {data['memory']}\n\n## Solution\n\n{contents}"

    page = (wiki / (directory.name + ".md"))
    page.touch(0o777)
    page.write_text(full_contents)


# project euler

euler_data = []

for directory in filter(lambda x: x.is_dir(), euler.iterdir()):

    s = directory.name.split("-", 1)

    data = {
        "id": s[1],
        "number": int(s[0]),
        "link": f"https://projecteuler.net/problem={int(s[0])}"
    }

    for file in directory.iterdir():
        if file.is_file() and file.stem == s[1]:
            data["extension"] = file.suffix

    assert "extension" in data, directory.name
    data["solution"] = f"{solution_base}/{directory}/{s[1]}{data['extension']}"
    euler_data.append(data)


# write out


home = (wiki / "Home.md")

with home.open("w") as f:

    f.write("# Home\n\n")
    f.write("This wiki is automatically generated / updated when new solutions are added.\n\n")

    # kattis

    f.write("## Kattis\n\n")
    f.write("Total Solutions: {}\n\n".format(len(kattis_data)))
    score = sum(map(lambda x: float(x['difficulty']) if "-" not in x['difficulty'] else float(x['difficulty'].split("-")[0]), kattis_data))
    f.write("Total Score: {}\n\n".format(score))
    f.write("### Problems Solved\n\n")

    kattis_data.sort(key=lambda x: x['id'])

    f.write("| Name | ID | Difficulty | CPU Time | Memory Limit | Solution |\n")
    f.write("| :-: | :-: | :-: | :-: | :-: | :-: |\n")
    for entry in kattis_data:
        solution = solution_base + "/kattis/{}/{}{}".format(entry['id'], entry['id'], entry['solution'])
        link = '[{}](https://open.kattis.com/problems/{})'.format(entry['title'], entry['id'])
        f.write("| {} | {} | {} | {} | {} | [{}]({}) |\n".format(link, entry['id'], entry['difficulty'], entry['cpu'], entry['memory'], entry['solution'], solution))

    # project euler

    kattis_data.sort(key=lambda x: x['id'])

    f.write("\n## Project Euler\n\n")
    f.write(f"Total Solutions: {len(euler_data)}\n\n")

    f.write("| Problem # | ID | Solution |\n")
    f.write("| :-: | :-: | :-: |\n")
    for entry in euler_data:
        f.write(f"| {entry['number']} | [{entry['id']}]({entry['link']}) | [{entry['extension']}]({entry['solution']}) |\n")
