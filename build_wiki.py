from pathlib import Path

p = Path(".")

wiki = p / "wiki"
wiki.mkdir(mode=0o777, exist_ok=True)

languages = []
solutions = []

for directory in filter(lambda x: x.is_dir() and not x.name.startswith(".") and x != wiki, p.iterdir()):

    readme = directory / "README.md"
    print(readme)
    with readme.open("r") as f:
        contents = f.read().strip()

    full_contents = f"\
        # {directory.name}\n\
        \n\
        ## Solution\n\
        \n\
        {contents}\
        "

    page = (wiki / (directory.name + ".md"))
    page.touch(0o777)

    print(page.resolve(), page.owner())
    page.write_text(full_contents)
