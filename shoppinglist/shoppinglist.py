from sys import stdin

lines = stdin.read().strip().split("\n")[1:]

sets = list(map(lambda x: set(x.split(" ")), lines))

unions = set.intersection(*sets)

print(len(unions))
print("\n".join(sorted(unions)))
