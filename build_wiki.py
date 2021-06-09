from kattis_download.main import get_soup, parse_soup
from pathlib import Path

p = Path(".")

wiki = p / "wiki"
wiki.mkdir(mode=0o777, exist_ok=True)

# Need Home file
(wiki / "Home.md").write_text("# Home")

languages = []
solutions = []

for directory in filter(lambda x: x.is_dir() and not x.name.startswith(".") and x != wiki, p.iterdir()):

    readme = directory / "README.md"
    print(readme)
    with readme.open("r") as f:
        contents = f.read().strip()

    data = parse_soup(get_soup(directory.name))

    full_contents = f"\
        # {data['title']}\n\
        \n\
        ID: {directory.name}\n\
        \n\
        Difficulty: {data['difficulty']}\n\
        \n\
        CPU Time: {data['cpu']}\n\
        \n\
        Memory: {data['memory']}\n\
        \n\
        ## Solution\n\
        \n\
        {contents}\
        "

    page = (wiki / (directory.name + ".md"))
    page.touch(0o777)

    print(page.resolve(), page.owner())
    page.write_text(full_contents)
