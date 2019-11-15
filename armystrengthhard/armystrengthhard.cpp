#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {

    int cases;
    cin >> cases;

    // Loop to handle each test case
    for (int c = 0; c < cases; c++) {

        // Get the sizes of each army
        int godzillaSize;
        int mechaGodzillaSize;

        cin >> godzillaSize;
        cin >> mechaGodzillaSize;

        // Make an array to store each "army"
        int godzillaArmy [godzillaSize];
        int mechaGodzillaArmy [mechaGodzillaSize];

        // Read in the Godzilla army
        for (int i = 0; i < godzillaSize; i++) {
            cin >> godzillaArmy[i];
        }

        // Read in the MechaGodzilla army
        for (int i = 0; i < mechaGodzillaSize; i++) {
            cin >> mechaGodzillaArmy[i];
        }

        // Sort the "armies", since weaker pieces correspond to 
        // lower values
        sort(godzillaArmy, godzillaArmy + godzillaSize);
        sort(mechaGodzillaArmy, mechaGodzillaArmy + mechaGodzillaSize);

        // Start our pointers by looking at the weakest pieces
        int godzillaIndex = 0;
        int mechaGodzillaIndex = 0;

        // While one army is not depleted
        while ((godzillaIndex < godzillaSize) && (mechaGodzillaIndex < mechaGodzillaSize)) {
            
            // Get the weakest pieces
            int weakestGodzilla = godzillaArmy[godzillaIndex];
            int weakestMechaGodzilla = mechaGodzillaArmy[mechaGodzillaIndex];

            // MechaGodzilla loses if it is weaker or equal to the weakest
            // Godzilla piece; look at the next weakest piece.
            if (weakestMechaGodzilla <= weakestGodzilla) {
                mechaGodzillaIndex++;
            } else {
                godzillaIndex++;
            }
        }

        // Battle is over - announce
        if (godzillaIndex < godzillaSize) {
            cout << "Godzilla" << endl;
        } else {
            cout << "MechaGodzilla" << endl;
        }
    }

    return 0;
}