# Are You Listening?

**Problem**: [areyoulistening](https://open.kattis.com/problems/areyoulistening)

**Difficulty**: 2.7

## Solution

For this, read in each tower, and we can compute the maximum "distance" to broadcast to without hitting the respective tower. We can do this with basic trig (x = |cx-x|, y = |cy-y|) and this gets us the distance to the actual tower, so subtract r, the radius. Sort all these distances in ascending order; either select the 3rd in the list, or 0 (in case the ranges are such that we cannot broadcast).
