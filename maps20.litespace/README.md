# Litespace

**Problem**: [maps20.litespace](https://maps20.kattis.com/problems/maps20.litespace)

## Solution

For this, one needs to use a stack to store all the numbers, and build a parser that turns the TS*-formatted string into a number to be pushed. Reading through the string, one can simply follow the string and the respective paths it may lead to until the user has reached an actual litespace command.
