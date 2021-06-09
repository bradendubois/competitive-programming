from kattis_download.main import get_soup, parse_soup
from pathlib import Path

p = Path(".")

wiki = p / "wiki"
wiki.mkdir(mode=0o777, exist_ok=True)

all_data = []

problems = list(filter(lambda x: x.is_dir() and not x.name.startswith(".") and x != wiki, p.iterdir()))

problems = problems[:5]

for directory in problems:

    readme = directory / "README.md"
    print(readme)
    with readme.open("r") as f:
        contents = f.read().strip()

    data = parse_soup(get_soup(directory.name))
    data['id'] = directory.name

    all_data.append(data)
    full_contents = f"# {data['title']}\n\nID: {directory.name}\n\nDifficulty: {data['difficulty']}\n\nCPU Time: {data['cpu']}\n\nMemory: {data['memory']}\n\n## Solution\n\n{contents}"

    page = (wiki / (directory.name + ".md"))
    page.touch(0o777)

    print(page.resolve(), page.owner())
    page.write_text(full_contents)


# Need Home file
home = (wiki / "Home.md")

with home.open("w") as f:

    f.write("# Home\n\n")
    f.write("This wiki is automatically generated / updated when new solutions are added.\n\n")
    f.write("## Problems Solved\n\n")

    all_data.sort(key=lambda x: x['id'])

    f.write("| Name | ID | Difficulty | CPU Time | Memory Limit |\n")
    f.write("| :-: | :-: | :-: | :-: | :-: |\n")
    for entry in all_data:
        link = '[{}](https://open.kattis.com/problems/{})'.format(entry['title'], entry['id'])
        f.write("| {} | {} | {} | {} | {} |\n".format(link, entry['id'], entry['difficulty'], entry['cpu'], entry['memory']))
