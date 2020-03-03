# ICPC Team Selection

**Problem**: [icpcteamselection](https://open.kattis.com/problems/icpcteamselection)

**Difficulty**: 2.8

## Solution

For this, one can take in the 3*N* students and sort them, and the lower 1/3rd will be the "lowest" in each team. The highest player cannot be a median, but the second-highest can, so they will be taken. Then, the next-highest cannot be a median (the first and second-highest have already been used) so the 4th highest can be a median player, etc.. So, the median players are every *second* player, starting at index *N* from the bottom of the list.
