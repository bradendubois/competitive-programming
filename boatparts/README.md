# Boat Parts

**Problem**: [boatparts](https://open.kattis.com/problems/boatparts)

**Difficulty**: 1.5

## Solution

Keep a tally of unique parts seen, and a map to track their occurrences, and any time a part is seen for the first time, mark it in the map. If the number of unique parts is ever == *P*, output the day (by tracking that too) or the number of parts seen total, etc.
