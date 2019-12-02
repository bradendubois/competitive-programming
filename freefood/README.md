# Free Food

**Problem**: [freefood](https://open.kattis.com/problems/freefood)

**Difficulty**: 1.4

## Solution

One can create a map of a day *x*, and for every event from *s* to *t*, mark all days between (and including) these in the map as having free food. After doing this for every event, simply iterate through the map from the earliest-starting event to the last-ending event, and if there is at least one event that has marked this day, increment a running total.
