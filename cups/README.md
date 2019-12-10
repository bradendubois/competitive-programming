# Stacking Cups

**Problem**: [cups](https://open.kattis.com/problems/cups)

**Difficulty**: 1.5

## Solution

For this, one can iterate through the cups given, and for every cup and size, store the pair in a mapping from size to color, and store the size in a list of sorts. If the first string is a digit, then divide it by two, and then store the color and value. After this, sort the sizes, and then iterate through the sorted list, outputting the corresponding color.
