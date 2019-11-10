# [Islands](https://open.kattis.com/problems/islands3)

This is problem #1 in (ideally) a series of programming problems I solve, perhaps daily.

## Description & Attribution

This problem is from [Kattis](https://open.kattis.com/), titled "[Islands](https://open.kattis.com/problems/islands3)", Problem ID "islands3".

- **Difficulty**: 2.5

**Requirements**:
- **CPU Time Limit**: 1 second.
- **Memory Limit**: 1024 MB

## Approach & Solution

If this problem were looking to *maximize* the number of potential islands, this would be a pretty quick problem, of course; we can just consider each "group" of **L** tiles as its own island, and the clouds that are potentially obscuring a connection between islands can be disregarded. 

We're looking to *minimize*, however, so we must find a way to connect all islands that are adjacent to a cloud as one single island.

So, find an **L** tile that may lead to a cloud, and if the cloud(s) lead to another **L** tile, that's still the same island? Seems easy, 
but how do we not end up just traversing back and forth looking at the same few tiles? We have to find some way to mark areas we've been at. Perhaps change the  tile
to an **X**, for e**x**plored, and we mark each fresh, unexplored island we encounter! 

```
map <-- our map of "W", "L", and "C" "tiles" representing the landmasses

ClearSection(map[0..m][0..n], i, j)
    x <-- map[i][j]
    if x = "L" or "C"
        map[i][j] <-- "X"

        if i - 1 >= 0
            ClearSection(map, i - 1, j)
        if i + 1 < m
            ClearSection(map, i + 1, j)
        if j - 1 >= 0
            ClearSection(map, i, j - 1)
        if j + 1 < n
            ClearSection(map, i, j + 1)
```

That seems like a reasonable way to clear out an entire area that can be safely viewed as one single island! Now we just go through our map and repeat this any time we find a "fresh" **L** tile.

```
islands <-- 0

for i <-- 0 to m
    for j <-- 0 to n
        item = map[i][j]
        
        if item = "L"
            ClearSection(map, i, j)
            islands = islands + 1

return islands
```

And we're done!
