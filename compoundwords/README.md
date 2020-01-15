# Compound Words

**Problem**: [compoundwords](https://open.kattis.com/problems/compoundwords)

**Difficulty**: 1.6

## Solution

Read in every word into a list, and then (through two loops, or some other way) taking every pair *a* and *b*, check if *a*+*b* has not been found, and if not, add it to some list of compound words, then mark that it has been found; repeat with *b*+*a*. Then, sort that list and output every word.
