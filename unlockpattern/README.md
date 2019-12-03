# Unlock Pattern

**Problem**: [unlockpattern](https://open.kattis.com/problems/unlockpattern)

**Difficulty**: 1.6

## Solution

Since the pivots are on a unit grid, one can read in all three lines and store the *x*, *y* positions of each pivot, and then go through from 1 to 9 in order and calculate the distance (basic trig!) between pivots 1 to 2, 2 to 3... and add the distances to a running total.
