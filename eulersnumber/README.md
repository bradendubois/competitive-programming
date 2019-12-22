# Euler's Number

**Problem**: [eulersnumber](https://open.kattis.com/problems/eulersnumber)

**Difficulty**: 1.8

## Solution

One can calculate the approximation exactly as detailed in the description, but don't recompute the factorial for each digit from 0 to *n*; factoral(*i*) = *i* \* factorial(*i*-1), so one can simply use a loop or something to do each, and build the next factorial off of the last.
