# Grandpa Bernie

**Problem**: [grandpabernie](https://open.kattis.com/problems/grandpabernie)

**Difficulty**: 3.2

## Solution

For this, take in all the *n* trips, where a country is mapped to a list of years; push the given year onto the list for the given country. After this, simply sort all the years. Then, when given a year and trip number, the country's list of years should have index *i-1* correspond to the trip *i*.
