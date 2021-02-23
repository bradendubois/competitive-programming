from sys import stdin

numbers = sorted(list(map(int, stdin.read().split(" "))))

diff1 = abs(numbers[1] - numbers[0])
diff2 = abs(numbers[2] - numbers[1])

if diff1 == diff2:
    print(numbers[2] + diff1)
    exit()

diff = min(diff1, diff2)

if numbers[0] + diff not in numbers:
    print(numbers[0] + diff)

else:
    print(numbers[1] + diff)
