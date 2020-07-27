# Recount

**Problem**: [recount](https://open.kattis.com/problems/recount)

**Difficulty**: 2.1

## Solution

For this, simply go through every name, and keep some map of the candidate to its number of votes, and increment their vote. At the end, loop through the candidates and their counts, keeping a "max seen" so far (initialized to -1 or similar), and if the current candidate has a greater number of votes, update this, if they have the same, output "Runoff!" and exit, or skip.

**Note**: It's interesting to see my solution work without any sorting; since two candidates, neither of whom win, may tie, "Runoff!" may well be output if we don't see the winning candidate in between / before these tying non-winners. *Knowing* this issue, we would want to change how we store the "max seen", such as having the count, as well as a vector/list of names, and if the max is exceeded, clear the vector and only insert this new max; if it ties, add the name to the vector. At the end, you'd output "Runoff!" if there is more than one name in the vector, otherwise just output the name.
