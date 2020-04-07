# Island Hopping

**Problem**: [islandhopping](https://open.kattis.com/problems/islandhopping)

**Difficulty**: 3.0

## Solution

For this, since we're choosing what bridges to add, and every island must reach every other island, what we're really looking for is a *minimum spanning tree* where each island is a node, there is an edge betwen every single island represented by the distance between the two bridge points. Therefore, we can put each hypothetical edge in a list, sort it, represent each island with its representative, and pretty well just do Kruskal's algorithm.
