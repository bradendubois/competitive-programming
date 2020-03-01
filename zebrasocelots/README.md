# Zebras and Ocelots

**Problem**: [zebrasocelots](https://open.kattis.com/problems/zebrasocelots)

**Difficulty**: 3.3

## Solution

Looking at a few examples, such as a stack (left to right is top to bottom) of OZZ taking 4, O taking 1, one can see a pattern: starting from the bottom of the stack as index *i*=0 and working up, an ocelot at any position *i* takes 2 ^ *i* bell tolls. So, one can read in the stack, and since it starts at N, decrement N on each character read, and if it is an "O", add 2 ^ *N* to some tally.
