# Bus

**Problem**: [bus](https://open.kattis.com/problems/bus)

**Difficulty**: 1.7

## Solution

Since the total will halve every time, plus an additional half a passenger (which would effectively be 0.5 + 0.25 + ... as it goes on), to reverse the number being halved *k* times, one can simply take 2 ^ k, and subtract 1.
