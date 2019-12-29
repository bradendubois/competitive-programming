# Statistics

**Problem**: [statistics](https://open.kattis.com/problems/statistics)

**Difficulty**: 1.8

## Solution

For each of the *n* cases, begin with some variables to track the max and min seen so far (initialized to something 1000000+ for min, -1000000 for max), and if the number read in is lower than the min seen so far, update it; same with the max. After this, output the min, max, and the difference between the two.