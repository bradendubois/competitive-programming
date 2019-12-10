# Line Them Up

**Problem**: [lineup](https://open.kattis.com/problems/lineup)

**Difficulty**: 1.6

## Solution

For this, one can read in all the names, but put them on two lists, one of which is for the original order, and one that can be adjusted. Sort the second list, and then check if the two lists have a matching ordering; if so, "INCREASING". If not, reverse the second list and check again; a match means "DECREASING". Otherwise, "NEITHER".
