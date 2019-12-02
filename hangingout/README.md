# Hanging Out on the Terrace

**Problem**: [hangingout](https://open.kattis.com/problems/hangingout)

**Difficulty**: 1.3

## Solution

One would assume the roof to be empty (0) at the start, and so when a group attempts to enter, simply add that amount if there is space (*L* - *group*), otherwise increment the total number of denials. When a group leaves, simply decrement the count of people on the roof by that amount.
