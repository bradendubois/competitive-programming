# Boss Battle

**Problem**: [bossbattle](https://open.kattis.com/problems/bossbattle)

**Difficulty**: 1.8

## Solution

In the "worst case", one would be having to essentially "chase down" the boss without every guessing luckily. In this case, consider the bomb going off in some spot, affecting it and the sides; if the boss were just on the closest safe spot, it could move "into" the area that was just bombed, so the next bomb that will have overlap with this space the boss could have moved into is 2 in either direction. Thus, in the worst case, a spiral around the entire boss area moving 2 spaces each time results in there being *n*-2 bombs, with a minimum of 1 bomb thrown.
