# Rating Problems

**Problem**: [ratingproblems](https://open.kattis.com/problems/ratingproblems)

**Difficulty**: 1.3

## Solution

For this, add up the *k* given ratings. The remaining *n-k* ratings could be (at worst) all `-3`, or (at best) `+3`, so the range is (the given ratings minus (3 \* *n-k*)) / *n* to (the given ratings plus (3 \* *n-k*)) / *n*.
