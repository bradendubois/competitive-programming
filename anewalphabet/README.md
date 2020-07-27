# A New Alphabet

**Problem**: [anewalphabet](https://open.kattis.com/problems/anewalphabet)

**Difficulty**: 1.7

## Solution

For this, just make a mapping as defined by the problem; this is the most tedious part, and where you may run into problems in a contest. If you hurry, you might not notice that, for example, the "y" uses a backtick, and does not do this anywhere else. Then, take in the string, iterate through it character by character and, if the case-insensitive character is mapped, output the new version, otherwise just output the character.
