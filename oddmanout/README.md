# Odd Man Out

**Problem**: [oddmanout](https://open.kattis.com/problems/oddmanout)

## Solution

A bit rude to single out the person who came alone (probably a sensitive subject), but we can take a map and map the invitation *C* to the number of occurrences it has appeared, and as we loop through the line of invitations, when an invitation is received, increment its number of occurrences. If it has been seen twice, we can erase the key entirely, and when we are done, the map has only one key left, which is the invitation for which there is only one occurrence.