# Erase Securely

**Problem**: [erase](https://open.kattis.com/problems/erase)

**Difficulty**: 1.7

## Solution

For this, since each bit is handled completely independently from the others, and is simply flipped, an even number of flips should not change the bit, and an odd number should. Iterate through both strings in parallel, and if *N* % 2 == 0 and the bits are different, or *N* % 2 != 0 and the bits *aren't* different, there is an error.
