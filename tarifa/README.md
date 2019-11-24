# Tarifa

**Problem**: [tarifa](https://open.kattis.com/problems/tarifa)

**Difficulty**: 1.3

## Solution

Since the amounts carry over each month, and at *worst* there is none left over, we can simply 
keep a running total and at each month, add *X* (the per-month allotted data) minus the *Ni*, the
amount used that month. To account for the additional amount allotted normally at the start of the
*Nth* month, this total should be initialized to *X*, not zero.
