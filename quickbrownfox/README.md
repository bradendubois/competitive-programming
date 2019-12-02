# Quick Brown Fox

**Problem**: [quickbrownfox](https://open.kattis.com/problems/quickbrownfox)

**Difficulty**: 1.6

## Solution

For this problem, one can read each line, and keep a mapping of a letter in the line to the number of its occurrences (incrementing the appropriate one at each read in character, if it is a letter), and then iterate through the alphabet and check each character in it to ensure its occurrences in the map previously created is > 0, if not, output the character. If there were no misses, output "pangram".

#### Implementation Note

This is the first problem I've encountered where something quick like ``cin >> str`` is not sufficient to read in a line, since it would read in word by word, something like ``getline(cin, str)`` is required.
