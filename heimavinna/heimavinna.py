from sys import stdin

l = stdin.read()

total = 0
for r in l.split(";"):
    if "-" in r:
        lo, hi = r.split("-")
        total += int(hi) - int(lo) + 1
    else:
        total += 1
print(total)