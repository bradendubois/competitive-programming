# Moving Day

**Problem**: [movingday](https://open.kattis.com/problems/movingday)

**Difficulty**: 2.1

## Solution

For this, take in *n* and *V*, and keep some *current* representing the largest volume box seen so far. For each of the *n* boxes, up *current* if the given box's volume is larger than *current*. Afterwards, output *current* minus *V*.
