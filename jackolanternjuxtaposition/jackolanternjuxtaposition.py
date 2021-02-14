from sys import stdin

N, T, M = map(int, stdin.read().split(" "))

i = 1
for j in [N, T, M]:
    if j > 0:
        i *= j
print(i)