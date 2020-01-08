# Kitten on a Tree

**Problem**: [kitten](https://open.kattis.com/problems/kitten)

**Difficulty**: 1.7

## Solution

Save the first number as the *start*/*current*, for each non-"-1" line, and map all *b* values to *a*. Then, until the *current* value == 0, output *current*, get the mapped lower-branch corresponding to *current*, and set *current* to this branch.