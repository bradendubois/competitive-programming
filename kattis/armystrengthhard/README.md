More C++ practice. Since the "battle" is the comparison between the two lowest integer values of each "army", we can sort the two armies and initialize some pointers to the start of each army. Since the army containing the weakest piece loses, but a tie is determined by the MechaGodzilla army losing, MechaGozilla loses if its weakest piece is *less than or equal to* the weakest piece of the Godzilla army. We can simply repeatedly check the two pieces at these pointers, and a "death" is represented by incrementing the pointer to the next weakest piece. If a pointer has exceeded the army size, it means all members of that team have died.

### Speedup

Since any piece of strength *X* in Godzilla's army will defeat all pieces <= *X*
in MechaGozilla's army, and doesn't "deplete" or anything, as long as there is
a piece in Godzilla's army >= the largest piece in MechaGozilla's army, all one
*really* needs to do is check the largest piece in both armies, and if Godzilla's
is larger (or equal), Godzilla wins, with no need to simulate all the battles.
