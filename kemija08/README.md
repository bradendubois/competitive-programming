# Kemija

**Problem**: [kemija08](https://open.kattis.com/problems/kemija08)

**Difficulty**: 1.4

## Solution

Understanding the problem is pretty straightforward, but implementation on removing/omitting these repeated letters may be difficult. The easiest implementation seems to be utilizing a cursor of sorts, that begins with the first character, and will output the character and move forward by 1, and repeat this until the end of the string; when one encounters a vowel, since the next *2* characters should be skipped, increment by an *additional* 2, in addition to the standard 1.
