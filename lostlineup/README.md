# Lost Lineup

**Problem**: [lostlineup](https://open.kattis.com/problems/lostlineup)

**Difficulty**: 1.5

## Solution

This one may seem confusing to keep all the numbers straight, but on the second line, basically any position *i* represents the *i+1*th person (can consider it almost an ID), and the value it is at represents the people they are from Jimmy, which will be 1 less than their position in the line. One loop to read in n-1 people can be done, mapping the value at that position to the position this value is *at* (the ID). After this loop, one can output "1" (Jimmy is always first), and loop from 0 to n-1 (the slight offset is to account for Jimmy) and get the person ID corresponding to this position from the map.
