# Parking

**Problem**: [parking2](https://open.kattis.com/problems/parking2)

**Difficulty**: 1.5

## Solution

Consider any arbitrary point where the person could park: since they'd walk as far left as the left-est store (and back), and as far right as the right-est store (and back), the distance walked anywhere is double the distance of the furthest apart stores. One can read in all the store locations, sort them, and output the difference between the largest/smallest, doubled.
