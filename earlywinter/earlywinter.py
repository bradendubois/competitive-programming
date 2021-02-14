from sys import stdin

f = stdin.read().strip().split("\n")

n, dm = map(int, f[0].split(" "))

data = map(int, f[1].split(" "))

for i, x in enumerate(data):
    if x <= dm:
        print(f"It hadn't snowed this early in {i} years!")
        exit()

print("It had never snowed this early!")
