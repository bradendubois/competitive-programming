from sys import stdin

n = list(map(int, stdin.read().strip().split("\n")[1:]))

print(sum(n)-len(n)+1)
