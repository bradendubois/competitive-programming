# Coloring Socks

**Problem**: [color](https://open.kattis.com/problems/color)

**Difficulty**: 2.4

## Solution

A greedy solution works for this problem: read in all the socks, and sort them. Then, take a machine and, while it is either *not full* or the absolute value between the current sock and the first sock put into the machine is <= *K*, increment the number of socks in the machine. If the machine is full or the difference is too large, increment the number of machines used by 1.
