# Server

**Problem**: [server](https://open.kattis.com/problems/server)

**Difficulty**: 1.8

## Solution

For this, just keep a tally of completed tasks (starting at 0) and read in each task, one by one; if there is time in *T* left to do the task, increment the number completed and lower *T* by the size of the task. Otherwise, break.
