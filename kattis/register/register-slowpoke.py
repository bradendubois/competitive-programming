from sys import stdin

# Helper function to increment the registers
def increment(target_list, register_list, i):


    # If it exceeds its limit...
    if target_list[i] == register_list[i]:

        # Reset it, and increment the next one
        target_list[i] = 0
        increment(target_list, register_list, i+1)
    else:
        # Increment a register
        target_list[i] += 1

# Split the line up into each register value
line = [int(x) for x in stdin.readline().rstrip().split(" ")]

# The limit of each respective register without overflow
finished = [1, 2, 4, 6, 10, 12, 16, 18]

# Count the number of "increments" from "explosion"
count = 0

# Increment until all registers are at capacity
while line != finished:
    count += 1
    increment(line, finished, 0)

# Return count
print(count)