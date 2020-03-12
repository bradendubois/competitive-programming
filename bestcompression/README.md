# Best Compression Ever

**Problem**: [bestcompression](https://open.kattis.com/problems/bestcompression)

**Difficulty**: 2.2

## Solution

Since the limit is *b* bits, 2 ^ b+1 -1 gives the value of *b* bits, all of which are true. If this is at least as large as the number of 1000 bit files (*N*), then output "yes".

