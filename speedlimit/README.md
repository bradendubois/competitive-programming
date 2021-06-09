# Speed Limit

**Problem**: [speedlimit](https://open.kattis.com/problems/speedlimit)

**Difficulty**: 1.4

## Solution

This one is trivial; have a total of miles driven initialized to 0, and read in each line for a set, tracking the "previous time", and simply add *s* \* (*t* - *prev* (initialized to 0)) and update *prev* to the current time, repeat for each set.
