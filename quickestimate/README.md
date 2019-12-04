# Quick Estimates

**Problem**: [quickestimate](https://open.kattis.com/problems/quickestimate)

**Difficulty**: 1.5

## Solution

One can do some modulo division and divide the number by 10, repeating this *x* times until the number == 0, *or* one can actually consider the number as a string, and simply detect the length of the string, since that will directly correspond to its number of digits.
