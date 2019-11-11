from sys import stdin

# The number the baby must count to
n = int(stdin.readline().rstrip())

# The list of words/numbers the baby reaches
line = stdin.readline().rstrip().split(" ")

# Check each word
for i in range(n):
    # Any number of non-number "mumble"s are fine, but a specifically stated number in the
    # incorrect position is an error
    if line[i].isdigit() and line[i] != str(i+1):
        print("something is fishy")
        exit(0)

print("makes sense")
