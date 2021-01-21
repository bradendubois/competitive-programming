from sys import stdin

L, H = map(int, stdin.read().split(" "))

print(len({x for x in range(L, H+1) if len(str(x)) == len(set(str(x))) and "0" not in str(x) and all(x % int(y) == 0 for y in str(x))}))
