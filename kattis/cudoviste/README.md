For this, one reads in the entire "lot", and can take every 2x2 square in the lot (A loop from 0 to R-1, inner loop of 0 to C-1, and take the 4 points of lot[r][c],  lot[r][c+1], lot[r+1][c], lot[r+1][c+1]) and count how many Xs there are (skipping if any are a #), and increment a map/tally for that number of squished cars. Afterwards, simply iterate through the map/tallies from 0 to 4.