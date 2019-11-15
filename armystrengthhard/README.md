# Army Strength (Hard)

**Problem**: [armystrengthhard](https://open.kattis.com/problems/armystrengthhard)

**Difficulty**: 2.3

## Solution

More C++ practice. Since the "battle" is the comparison between the two lowest integer values of each "army", we can sort the two armies and initialize some pointers to the start of each army. Since the army containing the weakest piece loses, but a tie is determined by the MechaGodzilla army losing, MechaGozilla loses if its weakest piece is *less than or equal to* the weakest piece of the Godzilla army. We can simply repeatedly check the two pieces at these pointers, and a "death" is represented by incrementing the pointer to the next weakest piece. If a pointer has exceeded the army size, it means all members of that team have died. 