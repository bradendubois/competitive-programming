# Filip

**Problem**: [filip](https://open.kattis.com/problems/filip)

**Difficulty**: 1.3

## Solution

For this problem, one should reverse both numbers, then compare the two. To reverse, one could do a hard-coded approach with variables *a1*, *a2*, *a3*, *b1*, *b2*, *b3*, representing a digit in each of the strings, do some specific indexes (reading the numbers as strings), converting, etc. to reverse the string. One could even use Python and reverse the number (string slicing with a backwards iteration) and then convert to int.

My approach was to use modulo division to get each digit from the numbers. One can take a number and modulo divide by 10 to get the right-most digit from the number, and then divide the original number to move everything over by 1 digit, repeat this until the original number == 0. One can start a reversed-number at 0, and to add these digits being modulo divided off of the original, multiply the reversed number by 10 to free up the one's digit, and add the number given.
