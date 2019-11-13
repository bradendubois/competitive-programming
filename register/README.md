# Primary Register

**Problem**: [register](https://open.kattis.com/problems/register)
**Difficulty**: 2.0

## Solution

Since one can consider the registers to be similar to numbers with different bases, it 
can be difficult to find some way to sum them, or do something clever, so it's easiest
to just add 1 to the set of registers, and handle the overflow, and keep doing this until
all the registers are at their max capacity. Straightforward.

**Time Limit Exceeded**

It's as good a time to learn C++ as any.

While there are much "smarter" ways to go around this problem, I decided to use this simply
as an opportunity to practice a little bit of C++, so I reimplemented the exact same solution
from Python into C++.

On the longest test case (all zeroes):

| Time | Python | C++ |
| :-: | :-: | :-: |
| real | 3.446s | 0.273s |
| user | 3.418s | 0.272s |
| sys  | 0.024s | 0.001s |
