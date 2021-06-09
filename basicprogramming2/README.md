Lots of little things; and doing them fast. For this, you may want the fastest data structures for each case, and handle each case separately.

### Case 1

Just use a "set" of sorts and insert each number as you read it. After inserting it, check if there exists (7777 - i), for each i as you insert it. It's an odd number they need to sum to anyway, so they can't be the same number. If the set contains (7777 - i), output "Yes" and exit.

### Case 2

Again, use a set, and before inserting a number, check if it is already in the set; if so, there's a duplicate.

### Case 3

I used a map, but you may want a kind of key/value store where you track the count of each number; insert the number, then see if its count is above N/2.

### Case 4

Use a vector and read in every number, sort the list, then just output the positions at *size / 2 - 1* and * size / 2* if the size is even, or just *size / 2* if it's odd.

#### Case 5

Use a vector, read in the numbers, sort the list, then iterate through and output a number if it's in that range.
