from pathlib import Path

p = Path(".")
p.mkdir("wiki_directory")

wiki = p / "wiki_directory"

languages = []
solutions = []

for directory in filter(lambda x: x.is_dir() and not x.name.startswith("."), p.iterdir()):

    readme = directory / "README.md"
    contents = readme.open("r").read().strip()

    full_contents = f"\
        # {directory.name}\n\
        \n\
        ## Solution\n\
        \n\
        {contents}\
        "

    page = (wiki / directory.name).open("w")
    page.write(full_contents)
