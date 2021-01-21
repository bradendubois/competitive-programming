# Heir's Dilemma

**Problem**: [heirsdilemma](https://open.kattis.com/problems/heirsdilemma)

**Difficulty**: 1.6

## Solution

For this, a basic Python solution can achieve the solution in time. A comprehension (or loop), enumerate through each value in [L, H] and ensure that "0" is not in the string representation of the value, that the length of the number (as a string) is the same as the size of the string representation turned into a set (ensuring no duplicate values), and that the number module any of its digits is equal to zero.
