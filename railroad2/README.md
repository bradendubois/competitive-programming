# Railroad

**Problem**: [railroad2](https://open.kattis.com/problems/railroad2)

**Difficulty**: 1.3

## Solution

For this problem, since the problem is to ensure whether or not there are any "dead-ends", where there is not a matching piece to join a part of a "switch" or "junction" to be part of a loop, there must be a pair for any two "endpoints" of a switch or junction. A junction has 4 endpoints, and a switch has 3, so we can multiply *X* \* 4, and *Y* \* 3, and if these is an even number (modulo divide 2), it is possible.