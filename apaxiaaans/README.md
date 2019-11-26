# Apaxiaaaaaaaaaaaans!

**Problem**: [apaxiaaans](https://open.kattis.com/problems/apaxiaaans)

**Difficulty**: 1.4

## Solution

For this one, one can simply iterate through the string given and it, character-by-character, if the character is valid. To determine if it is valid, one can simply compare the character to the previous character, and if they are different, it can be output. To save time on lookups, a variable can be used to store the value of the last-output character, and it can be updated when the current character is different.
