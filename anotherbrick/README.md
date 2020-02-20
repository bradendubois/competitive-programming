# Another Brick in the Wall

**Problem**: [anotherbrick](https://open.kattis.com/problems/anotherbrick)

**Difficulty**: 1.9

## Solution

Keep two tallies, one for the number of layers complete, and one for the horizontal distance of the current layer completed. Iterating through the bricks, add the width of the brick to the horizontal distance; if the distance == *w*, reset distance to 0, and increment the number of layers complete. If the number of layers complete is equal to *h*, then output "YES". Otherwise, output "NO".
