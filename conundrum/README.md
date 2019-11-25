# Cryptographer's Conundrum

**Problem**: [conundrum](https://open.kattis.com/problems/conundrum)

**Difficulty**: 1.3

## Solution

One doesn't need to know the length of the inputted string, since the string it will be converted to "PerPerPer..." will be the same length, and *Per* repeats, any position *i* in the original string *s* will be "P" if i % 3 == 0, "e" if i % 3 == 1, and "r" if i % 3 == 2, so one can simply iterate through string and compare to whichever character it *should* be, and if they do not match, increment a tally.
