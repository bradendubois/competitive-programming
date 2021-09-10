# Read in the *first* line
first_line = input().rstrip().split()

# R = the number of rows (lines that follow), C = number of columns (not actually necessary)
r = int(first_line[0])
c = int(first_line[1])

# Initialize an empty map
map = []

# Read in the next R lines
for line in range(r):
    # Split every line up
    map.append([item for item in input()])

# Assume we've seen no islands!
islands = 0


# Takes the map, and a specific i/j value to "clear"
def clear_section(map, i, j):

    # The water is essentially our "base case", with a value of "W", but if this is an "L", we need to keep
    # clearing. This function is only called when we do encounter land, so "clouds" are fair game to keep
    # clearing out, as a cloud may eventually connect us to another piece of land, which, if reached by the cloud,
    # allows us to simplify and assume is connected to the original island.
    if map[i][j] == "L" or map[i][j] == "C":
        map[i][j] = "X"

        # Check only directly up/down/left/right, if within valid bounds, as a diagonal island piece may not actually
        # be connected to this island.
        if i - 1 >= 0:
            clear_section(map, i - 1, j)
        if i + 1 < len(map):
            clear_section(map, i + 1, j)
        if j - 1 >= 0:
            clear_section(map, i, j - 1)
        if j + 1 < len(map[i]):
            clear_section(map, i, j + 1)


# Iterate through the entire map
for i in range(0, len(map)):
    for j in range(0, len(map[0])):
        item = map[i][j]

        # If we have encountered an island
        if item == "L":
            # Clear it, and all land reachable through it (or connected clouds)
            clear_section(map, i, j)
            islands += 1

print(islands)
