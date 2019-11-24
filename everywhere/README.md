# I've Been Everywhere, Man

**Problem**: [everywhere](https://open.kattis.com/problems/everywhere)

**Difficulty**: 1.3

## Solution

This is straightforward in understanding, since we just track the number of *unique* cities in a list. In implementation, one should consider fast ways to track entries to see if they have already appeared or no. A map/dictionary seems fast, where if the city has not been enterred/marked, mark it in the map, and increase the number of unique cities by 1.
