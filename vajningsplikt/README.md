# Right-of-Way

**Problem**: [vajningsplikt](https://open.kattis.com/problems/vajningsplikt)

**Difficulty**: 1.8

## Solution

Map directions to something more easy to parse, such as integers, N = 0, E = 1, S = 2, W = 3. Then, translate *a*, *b*, and *c* to these values. Thus, case 1 is if we are leaving 2 away from where we approached, and we are to the left of whoever approaches. Case 2 is if we leave 1 more than we approach, and the approaching vehicle is not from our left.

