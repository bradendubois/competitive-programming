# A Prize No One Can Win

**Problem**: [aprizenoonecanwin](https://open.kattis.com/problems/aprizenoonecanwin)

**Difficulty**: 2.4

## Solution

After reading in and sorting all the items by ascending cost, the "line" of sorts to find is where we reach the *two most expensive items that are <= the target price*, since if this pair of items, (i, j), is the most expensive pair that is within the limit, all items above *j* + *j* must be greater than the limit. To achieve this, one can simply loop from i = 1 to *n* and check item *i* + item *i-1*, and if their sum is within the limit, *x*, then there are at least *i+1* valid items to sell.