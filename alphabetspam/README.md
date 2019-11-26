# Alphabet Spam

**Problem**: [alphabetspam](https://open.kattis.com/problems/alphabetspam)

**Difficulty**: 1.3

## Solution

For this one, one can simply loop through the string and get the char at each point; various character-analyzing functions can be used to tell whether it is upper or lowercase, compare it directly with '_' for the whitespace, otherwise it is a symbol. Increment whichever it falls under, and at the end, the "total" is just the size of the string, and one can divide each tally by that to get the ratio for that classifier.
