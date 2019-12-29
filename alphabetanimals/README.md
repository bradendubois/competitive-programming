# Alphabet Animals

**Problem**: [alphabetanimals](https://open.kattis.com/problems/alphabetanimals)

**Difficulty**: 3.3

## Solution

For this, take the last letter of the word given, consider it *l*. For every word read in, store it in some mapping of its *first* character to a list of all words that begin with that letter. If the word also starts with *l*, store that on a list of possible words to say (or just access that respective mapping later). If there are no words to possibly output, output a "?" and quit. If there are, for every word, check if either there are no words to output that *start* with this word's *last* letter, *or* the special case where this word starts *and* ends with the same letter, and is the last word on this list; if so, output it and a "!". Otherwise, output the first word on the list of possible words.
