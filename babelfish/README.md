# Babelfish

**Problem**: [babelfish](https://open.kattis.com/problems/babelfish)

**Difficulty**: 2.1

## Solution

For this, just take each line (before the blank line) and map the second word in the line to the first word. Then, reading each line after the blank line, if the line is in the mapping, output its result, otherwise "eh".
