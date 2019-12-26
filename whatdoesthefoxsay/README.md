# What does the fox say?

**Problem**: [whatdoesthefoxsay](https://open.kattis.com/problems/whatdoesthefoxsay)

**Diffculty**: 2.0

## Solution

For each of the *T* test cases, store the fox's message, then go through all of the following lines (until reaching the *question*), and store the third word on these lines (*animal* goes *sound*) in a map, a list, etc. and after reaching the *question*, go through the fox's original message, word by word; if the word is not in the map/list of non-fox noises, output it.
