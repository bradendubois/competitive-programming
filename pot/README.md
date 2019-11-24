# Pot

**Problem**: [pot](https://open.kattis.com/problems/pot)

**Difficulty**: 1.3

## Solution

Since every number that had its exponent concatenated with the based (i.e., 14^2 = 142) has an exponent that is one digit, depending on what language one attempted this in it may be easier/harder to find a way to split this. (One could convert to a string and split in Python?) With some division though, one can easily separate the two. With division, one can figure out the base by dividing by 10 (142 / 10 = 14), and can figure out the power by modulo dividing by 10 (142 % 10 = 2). Doing this for every number and adding to a running total can get the solution.
