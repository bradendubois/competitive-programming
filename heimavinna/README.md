# Homework

**Problem**: [heimavinna](https://open.kattis.com/problems/heimavinna)

**Difficulty**: 1.4

## Solution

For this, just split the input at the semicolons, and if it is one value (no ``-``), add this to a total. otherwise, split the values at the ``-``, and add ``high - low + 1`` to the total, to make both ends of the range included.
