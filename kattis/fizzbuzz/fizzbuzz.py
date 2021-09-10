from sys import stdin

line = [int(x) for x in stdin.readline().rstrip().split(" ")]
X, Y, N = line[0], line[1], line[2]

for i in range(1, N+1):
    msg = ("Fizz" if i % X == 0 else "") + ("Buzz" if i % Y == 0 else "")
    print(msg) if msg else print(str(i))
