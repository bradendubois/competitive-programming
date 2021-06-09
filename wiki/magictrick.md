# Magic Trick

ID: magictrick

Difficulty: 1.3

CPU Time: 1 second

Memory: 2048 MB

## Solution

Since swapping two of the same letter would appear indistinguishable from doing nothing, if there are no repeated occurrences of the same letter, then any action will be identifiable. Ensure there are no duplicates in the string; one way is to check that the string turned into a set has the same size as the original string.