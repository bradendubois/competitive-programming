# Broken Swords

**Problem**: [brokenswords](https://open.kattis.com/problems/brokenswords)

**Difficulty**: 1.7

## Solution

For this, keep a tally of TB (we can combine them) and LR slats, both initialized to 0. For each line, increment TB for each of the first/second values that are 0, and LR for each of the third/fourth that are 0. Then, since T and B, and L and R are interchangeable, the number of swords we can make is min(TB, LR) / 2. So, output this many swords, TB - *swords* \* 2, LR - *swords* \* 2.
