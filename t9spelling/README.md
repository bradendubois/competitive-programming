# T9 Spelling

**Problem**: [t9spelling](https://open.kattis.com/problems/t9spelling)

**Difficulty**: 1.6

## Solution

If the T9 had 3 letters per button consistently, it could be possibly to take the letter, its ascii value, and do some division, but since 7 and 9 have 4, it might be easiest to just make a mapping from each character to its T9 set of numbers to press. For every number, output its mapped set of numbers, and if this number % 10 is equal to the next letter's number % 10, they are on the same button and one also needs to output a space.
