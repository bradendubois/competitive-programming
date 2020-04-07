# Greedy Polygons

**Problem**: [maps20.greedypolygons](https://maps20.kattis.com/problems/maps20.greedypolygons)

## Solution

For this, calculate the original area using some basic geometry. Add to it the expansion, which is a circle (look at the rounded  edge and notice and how if you see the exact angle one section stops, and you follow the edge to the next rounded corner, the angle where it begins matches up), as well as the regular non-rounded edge each side expands by. This means to add a circle of radius *d* \* *g*, as well as the *n* sides \* their *l* length expanding by *d* distance *g* times.
