# Kafkaesque

**Problem**: [kafkaesque](https://open.kattis.com/problems/kafkaesque)

**Difficulty**: 1.7

## Solution

For this, simply keep a total of "passes" (starting at 0), a previous and current (initialize the previous as some kind of sentinel value like -1), and read each value one by one; if the current is less than the previous, this is an instance of an out-of-order pair of signatures requiring an additional pass. If this occurs, increment the total.
