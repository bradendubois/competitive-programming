from sys import stdin

n = list(map(int, stdin.read().strip().split("\n")[1:]))

if len(n) % 2 == 1:
    print("still running")
    exit()

print(sum([n[x+1]-n[x] for x in range(0, len(n), 2)]))
