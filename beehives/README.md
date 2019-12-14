# Beehives 

**Problem**: [beehives](https://open.kattis.com/problems/beehives)

**Difficulty**: 2.1

## Solution

For each case, one can read in the (*x*, *y*) of a hive and store them, then enumerate over every pair (some tracking of which pairs have been processed to avoid looking at v, w, and w, v, as separate cases could be done, but it's not necessary), get the distance between them; if it's less than or equal to *d*, mark both hives as being sour. After this processing, check the total number of hives marked *sour*, and the number of *sweet* is *N* - *sour*.
