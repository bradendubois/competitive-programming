# Fantasy Draft

**Problem**: [fantasydraft](https://open.kattis.com/problems/fantasydraft)

**Difficulty**: 3.4

## Solution

This solution is not too difficult to understand the approach, but the implementation is a bit tricky.

Since there are *n* teams, and *k* players per team, there are *n* \* *k* players to be assigned, which may be
fewer than the total *p* players that are available. Thus, we loop *k* times, and each time loop *n* times,
to assign the *k^th^* player to the *n^th^* team. At any team's turn, we can pop the first player off of the
respective team's *preference list*, and if that player is available, assign it, and mark the player as no
longer available. If that player is taken, repeat with the *next* preferred player, and try again, etc. If
there is no preference list for this team (or it has been depleted), one can simply take the first-ranked
player and assign it.

### Implementation Trickiness

Since one might use a list / queue / vector to store available players, consider the extreme cases where this
linear-search/extraction cost will take too long. Imagine the preference lists of all the teams being the
lowest-ranked players. The preference lists of all teams being merged at each index, and the order reversed,
consituting the tail of the preference list, *and* *n* \* *k* being far lower than *p*; one has to traverse
*every single available player* to find the respective team's player. 

To achieve a faster lookup/extraction, one should consider something such as Maps to convert between a rank
position and the player name to achieve much faster lookups.

#### fantasydraft-icpc.py

Included is the solution made during the 2019 ICPC! Python ``set``s saved us.
