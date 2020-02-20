# Prsteni

**Problem**: [prsteni](https://open.kattis.com/problems/prsteni)

**Difficulty**: 1.6

## Solution

Read in the rings as an array, and for every pair of rings (ring 1, i), find the greatest common divisor of ring 1 and ring i, and output ring 1 / gcd and ring i / gcd. To find the gcd, an easy function is to take the two numbers, and *while they are not equal*, subtract the smaller number from the larger number. Then, the gcd is either number (once they are equal).
