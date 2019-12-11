# Booking a Room

**Problem**: [bookingaroom](https://open.kattis.com/problems/bookingaroom)

**Difficulty**: 1.7

## Solution

Take in the *n* booked rooms, and find some way to mark their occupancy, and after this, one can simply iterate from 1 to *r* and check if this room is booked; if not, output it and exit early. If all the rooms have been checked and are taken, output "too late".

#### Speedup

If *n* = *r*, one can simply output "too late" without checking anything.
