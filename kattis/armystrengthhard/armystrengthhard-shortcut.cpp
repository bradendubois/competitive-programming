#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {

    int cases;
    cin >> cases;

    for (int c = 0; c < cases; c++) {

        int godzillaSize;
        int mechaGodzillaSize;

        cin >> godzillaSize;
        cin >> mechaGodzillaSize;

        int godzillaArmy [godzillaSize];
        int mechaGodzillaArmy [mechaGodzillaSize];

        for (int i = 0; i < godzillaSize; i++) {
            cin >> godzillaArmy[i];
        }

        for (int i = 0; i < mechaGodzillaSize; i++) {
            cin >> mechaGodzillaArmy[i];
        }

        sort(godzillaArmy, godzillaArmy + godzillaSize);
        sort(mechaGodzillaArmy, mechaGodzillaArmy + mechaGodzillaSize);

        if (godzillaArmy[godzillaSize - 1] >= mechaGodzillaArmy[mechaGodzillaSize - 1]) {
            cout << "Godzilla" << endl;
        } else {
            cout << "MechaGodzilla" << endl;
        }
    }

    return 0;
}

