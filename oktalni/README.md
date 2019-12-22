# Oktalni

**Problem**: [oktalni](https://open.kattis.com/problems/oktalni)

**Difficulty**: 1.8

## Solution

Easiest way to pad/group as per the instructions is to take in the number, and reverse it, and pad with *0*s until the length of the number is divisible by 3. After this, until the string is empty, repeatedly: loop 3 times, popping the last digit off the number, and if it is a 1, add 2^{0, 1, 2} to a tally, then output that number.
