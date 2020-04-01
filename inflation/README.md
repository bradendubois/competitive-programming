# Inflation

**Problem**: [inflation](https://open.kattis.com/problems/inflation)

**Difficulty**: 1.8

## Solution

For this, read in all the canisters and sort them in ascending size. Then, any canister in index *i* corresponds to a balloon of size *i+1*. If the canister is larger than i+1, the balloon would explode. Otherwise, check what fraction the balloon would be filled, and store the lowest fraction seen while iterating through. 
