# The Easiest Problem Is This One

**Problem**: [easiest](https://open.kattis.com/problems/easiest)

**Difficulty**: 1.5

## Solution

For this problem, one can sum the digits in *N*, and then begin a loop with a *p* value initialized at 11. Get the sum of the digits of *N* \* *p*, and if it's equal to the sum for just *N*, output *p* and continue to the next number, otherwise increment *p* and go again.
