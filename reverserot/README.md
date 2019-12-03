# Reverse Rot

**Problem**: [reverserot](https://open.kattis.com/problems/reverserot)

**Difficulty**: 1.5

## Solution

For this one, one can keep two maps, one to convert a character "A...Z\_." to an ID, and one to convert that ID to a character, and so one can read in the string, reverse it, and then convert each character to its ID, add *N* (modulo dividing by the size of the "A...Z\*." string if necessary) and convert to the new character.
