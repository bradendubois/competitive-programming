# The Dragon of Loowater

**Problem**: [loowater](https://open.kattis.com/problems/loowater)

**Difficulty**: 3.0

## Solution

For this, read in all the heads and knights, and store them in lists. Sort the lists in descending order. Then, compare the backs of each list: if the knight's value is at least as big as the head's diameter, it's the cheapest knight to dispose of the head, so add the height to a total, and pop the head from the list. Either way, pop the knight since it is either perfect for this head or it cannot cut off any heads. Once you have either no more knights, or no more heads, check: no more heads = output total, otherwise there are no more knights but still heads = "Loowater is doomed!"
