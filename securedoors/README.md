# Secure Doors

**Problem**: [securedoors](https://open.kattis.com/problems/securedoors)

**Diffculty**: 1.8

## Solution

For this, one can simply keep a map of people to whether or not they are in the building (initially no one is inside). On each line, output the person's name, the action they did ("entered" or "exited"), and then check whether the person was *already* inside for an entry or *already* outside for an exiting, outputting "(ANOMALY)" in those cases, and then updating the person's location either way.
 