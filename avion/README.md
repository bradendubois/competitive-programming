# Avion

**Problem**: [avion](https://open.kattis.com/problems/avion)

**Difficulty**: 1.4

## Solution

Read in the flight names, line by line, and keep a few running variables (the number of flights read in, since that is essentially the ID/row, and a boolean for whether or not a flight has been found that contains "FBI"), and simply check if "FBI" is in the string: if it is, output the number, and mark the boolean that one has been noted. At the end, if no flight was noted, output "HE GOT AWAY!"
