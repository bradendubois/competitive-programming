# Electrical Outlets

**Problem**: [electricaloutlets](https://open.kattis.com/problems/electricaloutlets)

**Difficulty**: 1.3

## Solution

For this, consider that since each strip (with the exception of the first one) will be plugged into another strip, if we have a total of *X* outlets across *K* strips, then we have *X-(K-1)* outlets available for appliances. So, read each line and total them all up, and subtract *K-1*, or start a tally to *-(K-1)* and add every *O* value read.
