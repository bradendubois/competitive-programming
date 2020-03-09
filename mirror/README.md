# Mirror Images

**Problem**: [mirror](https://open.kattis.com/problems/mirror)

**Difficulty**: 1.7

## Solution

For this, take in the number of test cases, T. For each case i, from 1 to T, output i, and take in R and C. Use a stack of stacks, which represents the image. For each row, push the initial row into a stack, and push *that* stack onto the main stack. Then. pop each stack off of the main stack, popping each character off a stack as it is popped. This fully reverses the order of the image.
