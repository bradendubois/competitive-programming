# Curse the Darkness 

**Problem**: [cursethedarkness](https://open.kattis.com/problems/cursethedarkness)

**Difficulty**: 2.4

## Solution

For each case, simply store the *X*, *Y* of the book, and for each candle, we want to see it is within 8 metres. Check the hypotenuse from the candle to the book (absolute value of *X*-*x*, absolute value of *Y*-*y*, summed and square-rooted) and if it's within 8 metres, mark some sort of "success" boolean for this case.
