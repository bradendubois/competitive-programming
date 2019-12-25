# Hangman

**Problem**: [hangman](https://open.kattis.com/problems/hangman)

**Difficulty**: 1.6

## Solution

For this, one can track all the unique letters in the word given, and go through the permutation of the alphabet given, marking correct guesses and tallying incorrect to see if Player 2 wins. One can also keep a list of all the unique letters in the word given, and then if any of these letters appear in the subsequence of the permutation starting at (*number of unique letters* + 9 (the max allowable mistakes)), then this letter would not be guessed in time, and Player 2 would lose.
