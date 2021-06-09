For this problem, we're looking for numbers that are stated to be in the *incorrect* positions, since in the examples 
shown, any amount of "mumbling" is allowed, but if a number is explicitly given but is wrong, the output "smells fishy".
To solve this, one can simply loop through the words given, knowing what number, *if* one is given, *should* be, and 
can simply disregard the word if it is *not* a number, and compare it if *is* a number.