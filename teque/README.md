# Teque

**Problem**: [teque](https://open.kattis.com/problems/teque)

**Difficulty**: 3.4

## Solution

It won't give the fastest running time (by a *lot*), but one can utilize two double-ended queues (deques) to easily handle all the operations. Pushing to the front can push to the front of the first deque, pushing to the back can push to the back of the second deque, and when one needs to push to the middle, rebalance the deques (popping the back of the first deque and putting that on the front of the second deque, or vice versa) so they are the same length, and then push to the front of the second deque.

It's not the fastest at all, but easy to implement.
