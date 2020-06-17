# DRM Messages

**Problem**: [drmmessages](https://open.kattis.com/problems/drmmessages)

**Difficulty**: 1.5

## Solution

For this, take the string and split it in two halves; sum the values of both strings. Then, take each character (A=0, B=1, ...) and add the sum for that string to that character. Mod by 26 if necessary. Do this with both halves. Add each character-pair between the two strings, again modding by 26. 
 