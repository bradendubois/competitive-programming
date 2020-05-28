# EpigDanceOff

**Problem**: [epigdanceoff](https://open.kattis.com/problems/epigdanceoff)

**Difficulty**: 1.9 

## Solution

For this, since each move is separated by a perfectly-vertical column of blanks, we can just read the input line by line, and keep one horizontal row representing each column (of size *M*), and increase any given spot on the line if it's a blank. At the end, any spot that found *N* blanks is a column separating two moves, and so we can output 1 + the number of blank columns found.
