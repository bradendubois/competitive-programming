# Chanukah Challenge

**Problem**: [chanukah](https://open.kattis.com/problems/chanukah)

**Difficulty**: 1.5

## Solution

This one is straightforward in concept, as we must process days 1 to N, which consists of the summation of each day i, 
1 <= i <= N, and each particular day involves i + 1 candles, it may be easy to do a loop from 1 to N and add to a total,
but one can go a little faster, knowing 1 + 2 + ... + n = (n * (n + 1)) / 2, and simply add n for the shammas.