# Veci

**Problem**: [veci](https://open.kattis.com/problems/veci)

**Difficulty**: 1.8

## Solution

One *could* implement methods to check all the digits of a number, do a loop to see all numbers <= 999,999 that have them, compare, etc. but the easiest way is to take *X* as an array of digits, and take every permutation of *X*, keeping a variable to track the smallest ordering that is strictly greater than the original *X*.
