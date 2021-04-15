# Spelling Bee

**Problem**: [spellingbee](https://open.kattis.com/problems/spellingbee)

**Difficulty**: 1.7

## Solution

If one treats each word as a *set* of letters, then we can check that the word's letters are a subset of the letters given. If this is true, and the length of a word is at least 4, and the first letter appears in the word, print it.