# Doubleplusgood

**Problem**: [doubleplusgood](https://open.kattis.com/problems/doubleplusgood)

**Difficulty**: 2.9

## Solution

For this, one can consider that with *N* numbers, there are *N*-1 + symbols, and of that *N*-1, there will be 2^N-1 possible +/Concatenation permutations. Simulating those, and inserting the resulting value into a set to check the size of later shows the total number of unique submissions.
