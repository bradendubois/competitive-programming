# Bacon, Eggs, and Spam

**Problem**: [baconeggsandspam](https://open.kattis.com/problems/baconeggsandspam)

**Difficulty**: 1.6

## Solution

For this, one can take in the *n* lines for each case, and register the first word in the line as a name, and all the subsequent words in the line as items. A map from each *item* to a list of all those who ordered them item is necessary, and one could keep a list of all the unique items, to output them all later (or access the keyset of that map). For every item in that line, add the name to those respective item lists, and if any of these lists are empty, add this item to the list of unique items. After processing, one can sort the list of items and iterate through them, and at each item, get its list of patrons and sort those. Output the item, and every patron.
