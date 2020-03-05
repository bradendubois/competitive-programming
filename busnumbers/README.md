# Bus Numbers

**Problem**: [busnumbers](https://open.kattis.com/problems/busnumbers)

**Difficulty**: 2.3

## Solution

For this problem, one can take in all the stops, and sort them in ascending order. Then, traverse the stops and group them: if the current stop is 1 greater than the "current" group's last number, or the current is empty, add it; otherwise, the current group is complete and can be added to some group *of* groups. Then, output all the groups: only the front if there is one number, otherwise the front *and* back, which are separated by a space if there are only two numbers in the group, "-" otherwise.
