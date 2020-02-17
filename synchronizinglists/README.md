# Synchronizing Lists

**Problem**: [synchronizinglists](https://open.kattis.com/problems/synchronizinglists)

**Difficulty**: 1.6

## Solution

For this, one can read in the numbers for each case, putting the first list's numbers onto *two* lists, one of which will be sorted. The second list's numbers can be on only one list, which is sorted. Then, one can go through the first list (sorted), and create a mapping from each number to its corresponding index's number in the second list. Then, go through the first list (unsorted) and check what number this maps to in the sorted second list.
