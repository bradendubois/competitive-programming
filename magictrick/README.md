# Magic Trick

**Problem**: [magictrick](https://open.kattis.com/problems/magictrick)

**Difficulty**: 1.3

## Solution

Since swapping two of the same letter would appear indistinguishable from doing nothing, if there are no repeated occurrences of the same letter, then any action will be identifiable. Ensure there are no duplicates in the string; one way is to check that the string turned into a set has the same size as the original string.
