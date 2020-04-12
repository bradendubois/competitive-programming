# Prerequisites?

**Problem**: [prerequisites](https://open.kattis.com/problems/prerequisites)

**Difficulty**: 1.9

## Solution

For each case, read in all the classes taken, and while reading each respective list in, check each class to see if it was taken and increment a tally if it has been; after reading a list of classes, see if *at least* as many as required were taken. If not, flip some boolean flag indicated that the requirements are not met.
