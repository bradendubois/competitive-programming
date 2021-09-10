Making a helper function can be useful in this problem; since there will be two x values, and two y values, and the different pairs between these will constitute all 4 points, the x value that has only occurred once, and the y value that has only occurred once, will be the (x, y) point missing. Making a function that takes 3 values and return which only occurs once can be useful here; we can apply some simple properties to figure it out: if *a* == *b*, then *c*, if *a* == *c*, then *b*, else *a*.