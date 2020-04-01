# I Hate The Number Nine

**Problem**: [nine](https://open.kattis.com/problems/nine)

**Difficulty**: 3.4

## Solution

For each given set of digits *d*, the total can be calculated as follows: for every position but the left-most, there are 9 (0-8) valid digits, and so one will need to calculate 9 ^ *d-1*, multipled by 8 (for the 0-8 digits the left-most position can have). To be done in 1 second, oen must implement a fast exponentiation function that mods by 1000000007 to prevent overflow.
