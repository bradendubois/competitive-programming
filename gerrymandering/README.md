# Gerrymandering

**Problem**: [gerrymandering](https://open.kattis.com/problems/gerrymandering)

**Difficulty**: 1.4

## Solution

For each precinct, add *a* and *b* to totals of votes corresponding to district *d*. After this, go through each district from 1 to *D*, and for each district, the winner is the one with the most votes. The wasted votes for the winner are the votes they received, *minus* (the total votes for either party / 2 + 1); the wasted votes for the loser are all votes cast for the loser. Store these wasted votes in tallies for votes wasted on each respective candidate. After processing all districts, output |Wa - Wb| / V.
