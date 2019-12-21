# Estimating the Area of a Circle

**Problem**: [estimatingtheareaofacircle](https://open.kattis.com/problems/estimatingtheareaofacircle)

**Difficulty**: 1.6

## Solution

The true area is some basic trig (pi \* *r*^2), and the estimate made is the amount of area *of* the square that is actually area of the circle. Since the dots are equally likely to land anywhere, the radius given can be doubled, then squared, to get the area of the square, the ratio *c* / *m* of the points that landed in the circle can be multiplied by the area of the square to get the estimated area.
