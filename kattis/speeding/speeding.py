from sys import stdin

lines = [[int(x) for x in y.split(" ")] for y in stdin.read().strip().split("\n")[1:]]

def speed(t):
    distance = t[1][1] - t[0][1]
    time = t[1][0] - t[0][0]

    return distance // time

print(max(map(speed, zip(lines[:-1], lines[1:]))))