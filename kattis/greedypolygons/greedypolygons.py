from sys import stdin
import math

N = int(stdin.readline().rstrip())

for i in range(N):

    line = stdin.readline().rstrip().split(" ")

    n = int(line[0])
    l = int(line[1])
    d = int(line[2])
    g = int(line[3])

    area = n * (l ** 2) / (4 * math.tan(math.pi / n))

    print(area + (l *d * g * n) + (math.pi * ((d *g) ** 2)))
