# ToLower

**Problem**: [tolower](https://open.kattis.com/problems/tolower)

**Difficulty**: 1.8

## Solution

One of the skills for this question is being able to *quickly* read between the lines to know what the problem is; since only the first character in the strings can be converted, check every second-and-onward character in all the *T* strings for a given problem, and if any are uppercase, this problem can't be solved, otherwise increment a running total somewhere.