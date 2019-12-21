# False Sense of Security

**Problem**: [falsesecurity](https://open.kattis.com/problems/falsesecurity)

**Difficulty**: 1.6

## Solution

Making the mappings from alpha to morse, morse to alpha, is a bit tedious, but after doing that, one can easily follow the instructions described in the problem on converting a string: going character by character, convert it to morse, store its length in a stack somewhere, and add this morse character to the converted message. After this, pop each number off the stack of sizes (effectively reversing it), slice that many characters off the front of the converted message, and output its converted-to-alpha value.
