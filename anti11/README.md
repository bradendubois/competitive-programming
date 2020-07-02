# Ocean's Anti-11

**Problem**: [anti11](https://open.kattis.com/problems/anti11)

**Difficulty**: 2.5

## Solution

It might be a bit tricky to notice the pattern, but the number of eligible strings is actually the Fibonacci sequence, though the length *n* actually corresponds to the *n+2*th number. To meet the time limit though, when implementing a fibonacci function, you'll want to cache results to speed everything up or the recursion will be far too slow.
