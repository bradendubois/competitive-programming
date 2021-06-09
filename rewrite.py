from pathlib import Path

p = Path(".")

for directory in filter(lambda x: x.is_dir() and not x.name.startswith("."), p.iterdir()):
    print(directory)
    readme = directory / "README.md"
    x = readme.open("r").read()
    x = x.split("\n")
    assert "## Solution" in x, directory
    i = x.index("## Solution")
    new_value = x[i+2:]
    y = readme.open("w")
    y.write(new_value)