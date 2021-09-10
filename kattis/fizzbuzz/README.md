This one is pretty straightforward; loop through each number *i* from 1 to N, and we can consider the message to be printed
to be an empty string, or something placeholder, and we can add "Fizz" if *i* % *X* == 0, and add "Buzz" if *i* % *Y* == 0,
and if the string is no longer empty, print it, otherwise we just print *i* since it's not divisible by either *X* or *Y*.
