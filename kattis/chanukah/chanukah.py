from sys import stdin

# Number of datasets
n = int(stdin.readline().rstrip())

# Process each dataset
for i in range(n):
    # The number of days to find the total candles for up to (and including)
    val = int(stdin.readline().rstrip().split(" ")[1])

    # Quick summation from 1 to i, for the building amount each day, + the day i,
    # to represent the shammas, one of which is lit every day
    candles = int(((val * (val + 1)) / 2) + val)
    print(str(i + 1) + " " + str(candles))
