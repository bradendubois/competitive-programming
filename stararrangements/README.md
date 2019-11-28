# Star Arrangements

**Problem**: [stararrangements](https://open.kattis.com/problems/stararrangements)

**Difficulty**: 1.4

## Solution

There are 3 layouts to consider for a flag: ABABA..., ABAB..., AAA..., and so one can iterate from i=2 to S/2 + 1 (the valid ranges for A to be based on how the star pattern may exist), and for the first case, A = i, B = i-1, and if S % (A + B) = A, it is the first case, = 0 is the second, and if S % A = 0, it is the third.
