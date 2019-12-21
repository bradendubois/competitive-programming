# Missing Numbers

**Problem**: [missingnumbers](https://open.kattis.com/problems/missingnumbers)

**Difficulty**: 1.7

## Solution

For this, one could keep a list of all the numbers recited and then iterate through it and find all the missing ones, but what one can do to output/check as they're first read is have an *expected* value, and begin it at 1, and as the numbers are read, if the number is *not* the expected value, output everything up to that number just read. After that (or even if there is no error), set the *expected* next value to be the just-read number + 1.
