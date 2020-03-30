from sys import stdin

n = int(stdin.readline().rstrip())

while (n > 0):

    line = [int(x) if x else -1 for x in stdin.readline().rstrip().split(",")]
    total = 0
    index = 0

    while len(line) > 0:
        if line[-1] > 0:
            total += line[-1] * (60 ** index)
        index += 1
        line.pop(-1)
    
    print(total)
    n -= 1
