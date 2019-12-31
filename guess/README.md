# Guess the Number

**Problem**: [guess](https://open.kattis.com/problems/guess)

**Difficulty**: 2.6

## Solution

One can do a basic binary search to find the number, with lower and upper bounds of 1 and 1000 at first. Output *upper* + *lower* / 2 (the midpoint), and take in the response; if correct, exit, if "lower", change the upper bound to be the midpoint minus 1, if "higher", change the lower bound to be the midpoint plus 1.
