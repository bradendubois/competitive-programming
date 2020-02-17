# Perket

**Problem**: [perket](https://open.kattis.com/problems/perket)

**Difficulty**: 2.2

## Solution

For this, one can take advantage of permutations to save some work (at the cost of some redundant computation! Still certainly fast enough to be <1s.) Read all the ingredients into a list (store them as pairs or similar) and then, iterate through all the permutations of the list, and starting at the first element to the last, add it to your hypothetical meal and calculate what the current |sour - bitter| is, and store it if it is the *lowest difference* seen so far; you will eventually generate the permutation of your ingredients such that some subsequence beginning with the first ingredient is the correct subsequence.
