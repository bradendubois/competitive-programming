from sys import stdin

l = stdin.read().split("\n")
print(sum(a == b for a, b in zip(l[:-1], l[1:])))
