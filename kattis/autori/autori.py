from sys import stdin

# Get the first letter of every name, where the line is separated by the "-"s
line = [x[0] for x in stdin.readline().rstrip().split("-")]

# Print all the first letters, without newlines at the end.
for item in line:
    print(item, end="")
print()