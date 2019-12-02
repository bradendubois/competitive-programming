# Encoded Message

**Problem**: [encodedmessage](https://open.kattis.com/problems/encodedmessage)

**Difficulty**: 1.4

## Solution

Invasion of privacy (and eccentricity of squared-length messages) aside, one can essentially see the pattern visualized in the Kattis example: we read the right-most column (top to bottom), then the next one to the left, and repeat for the entire message. A loop to start at the top of each column can go from i = 0 *root* (the square root of the size of the message - it is a square) to 0, and an inner loop going from j = 0 to *root*, where the position to output is (*j* \* *root*) + *i*.
