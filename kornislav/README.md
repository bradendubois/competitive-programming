# Kornislav

**Problem**: [kornislav](https://open.kattis.com/problems/kornislav)

**Difficulty**: 1.4

## Solution

Since the area must be enclosed, one can take the two largest numbers, and since the area must be enclosed, the smaller of the two will be the enclosed amount of that dimension of the rectangle. One repeats this with the two smallest numbers, and multiplies these two together. Effectively, this is the smallest number, and second-largest number.
