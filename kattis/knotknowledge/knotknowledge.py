from sys import stdin
x = stdin.readlines()

need = set(x[1].split())
known = set(x[2].split())

print((need - known).pop())
