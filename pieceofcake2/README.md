# Piece of Cake!

**Problem**: [pieceofcake2](https://open.kattis.com/problems/pieceofcake2)

**Difficulty**: 1.3

## Solution

Some basic geometry shows each of the areas, which consist of (v, h), (n-v, h), (v, n-h), and (n-v, n-h). Since all 4 areas are possibly included, some simplification can be done such that the biggest area is max(v, n-v) * max(h, n-h) * 4 (the height).
