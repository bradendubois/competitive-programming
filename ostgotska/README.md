# Östgötska

**Problem**: [ostgotska](https://open.kattis.com/problems/ostgotska)

**Difficulty**: 1.7

## Solution

For each word, increment a tally of words seen, and if it contains "ae", increment a tally of words containing "ae" seen. After all words are processed, if *ae* / *total* > 0.4, output "dae ae ju traeligt va", otherwise, "haer talar vi rikssvenska".
