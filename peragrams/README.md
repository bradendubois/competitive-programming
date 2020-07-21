# Peragrams

**Problem**: [peragrams](https://open.kattis.com/problems/peragrams)

**Difficulty**: 1.7

## Solution

For this, it's easy enough if one thinks about how a palindrome must be "laid out", since we don't actually need to do the re-ordering ourselves. Easily enough, at any given point from the start, the same letter from the other number of spaces "inwards" must match. If they all must match, then there must be an even number of each letter, otherwise they don't "match" another of the same character somewhere else. The only exception is that whatever letter is in the exact middle of an odd length string can have an odd occurrence, such as being the only one of that letter. So, if we count the occurrences of every letter in the string, take the total number of *odd*-total-occurrence letters. We'd delete one from all of them, *except* one which can be the middle character. So, if you have *x* letters that occur an odd number of times, we must delete max(0, *x*-1) characters.
