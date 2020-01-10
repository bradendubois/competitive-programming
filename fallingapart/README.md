# Falling Apart

**Problem**: [fallingapart](https://open.kattis.com/problems/fallingapart)

**Difficulty**: 1.7

## Solution

Since each person will (in alternating turns) take the biggest piece available, sort all the numbers given, and then alternate through the sorted list (largest to smallest) and add the respective number to either Alice or Bob's running totals. Afterwards, output Alice's, then Bob's.
