from collections import defaultdict
import collections
from sys import stdin

data = stdin.read().strip().split("\n")[1:]

count = defaultdict(int)

for frosh in data:
    s = list(map(int, frosh.split(" ")))
    count[str(sorted(s))] += 1

biggest = max(count.values())
biggest *= list(count.values()).count(biggest)

print(biggest)
