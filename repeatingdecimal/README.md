# Repeating Decimal

**Problem**: [repeatingdecimal](https://open.kattis.com/problems/repeatingdecimal)

**Difficulty**: 3.4

## Solution

For this, one can just implement basic long division. Since *a* < *b*, output "0." to start, and then, looping *c* times: if *a* < *b*, a \*= 10; output *a* / *b*, and mod *b* from *a*.
