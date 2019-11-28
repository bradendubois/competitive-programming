# Symmetric Order

**Problem**: [symmetricorder](https://open.kattis.com/problems/symmetricorder)

**Difficulty**: 1.4

## Solution

To create the symmetric shape, we want to take every *second* name and store them for later, and then output those in reverse order they were stored. For this, we can use a stack, and simply push every second name we read in, and output the other ones, and then pop every name off the stack, outputting as we go.
