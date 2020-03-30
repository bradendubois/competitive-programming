# Math Homework

**Problem**: [mathhomework](https://open.kattis.com/problems/mathhomework)

**Difficulty**: 2.1

## Solution

For this, it's easy enough to do a triple-nested loop to just calculate each triple of values and see if they equal *l*, but for speed, one will want to check in each loop to see if a value has exceeded *l* so that one can exit early, since it's not necessary to keep looping there.
