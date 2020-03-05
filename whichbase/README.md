# Which Base is it Anyway? 

**Problem**: [whichbase](https://open.kattis.com/problems/whichbase)

**Difficulty**: 2.4

## Solution

For this, using a language that lets you easily convert bases will help a lot. Any of the inputs can be interpreted as hex, so those can just be converted. If the string contains an 8 or 9, it could not possibly be an octal number, and so that can be detected and output as 0 instead.
