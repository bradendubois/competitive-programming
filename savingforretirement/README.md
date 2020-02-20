# Saving For Retirement

**Problem**: [savingforretirement](https://open.kattis.com/problems/savingforretirement)

**Difficulty**: 1.8

## Solution

Since Bob saves *Bs* every year, he saves (*Br* - *B*) \* *Bs* in total, making Alice's target that exact amount, plus 1. To get this, we can take the ceiling of this goal divided by how much she saves every year, *As*; this is the number of years Alice must save, so we can output this plus *A*.
