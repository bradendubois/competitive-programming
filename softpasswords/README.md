# Soft Passwords

**Problem**: [softpasswords](https://open.kattis.com/problems/softpasswords)

**Difficulty**: 1.8

## Solution

For this, one can simple check if *S* == *P*, then generate every possible permutation of *P* (prepending/appending digits, converting the case of *P*) and compare with *S* to see if any match (either storing them all and checking at the end, or checking as you go) and if there is a match, output "Yes".
