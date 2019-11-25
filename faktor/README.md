# Faktor

**Problem**: [faktor](https://open.kattis.com/problems/faktor)

**Difficulty**: 1.3

## Solution

Receiving *A* and *I*, we want to find *x*, such that ceiling(*x*/*A*) = *I*, where *x* is as low as possible. Since the value is always rounded up, we can calculate *A* \* *I - 1*, and add 1, since we calculate the "impact factor" one lower, and add a single scientist to it, which will result in the impact factor specified.
