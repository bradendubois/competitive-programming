For this, the solution is fairly straightforward: splitting the line up, separated at its commas, and parsing right to left, take each number *i* and add *i* \* 60 ^ index (0 is the rightmost position, then 1, 2, etc.) to a running total.

This can be very easy, depending on what language you use. My C++ solution works well, and fast, but this can be done *far* more easily in Python using a list comprehension and ``split(",").
