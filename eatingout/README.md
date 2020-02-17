# Eating Out

**Problem**: [eatingout](https://open.kattis.com/problems/eatingout)

**Difficulty**: 3.0

## Solution

Any item can be picked by *at most* 2 people; it is ``impossible`` if there *must* be some item picked by *a*, *b*, **and** *c*. In the worst case, this would be that *every* item has been picked exactly twice: 2*m*. Therefore, so long as *a* + *b* + *c* is *at most* 2*m*, then it is possible for the items picked to be such that no item was picked by all 3 people.
