# Cooking Water

**Problem**: [cookingwater](https://open.kattis.com/problems/cookingwater)

**Difficulty**: 2.0

## Solution

If Gunilla is right, and they all *might* boil at the same time, that means there is some window of time which is present in every [*a*, *b*]. To see if Edward is right, for each interval read in, check and store what the *lowest b* value seen is, and what the *highest a* value seen is. If the *highest a* is > the *lowest b*, there are (at least) two intervals of time with no overlap, and so water cannot boil at the same time.
 