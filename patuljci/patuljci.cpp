#include <iostream>
#include <vector>

using namespace std;

int main() {

    int total = 0;

    vector<int> dwarves(9);
    for (auto & dwarf : dwarves) {
        cin >> dwarf;
        total += dwarf;
    }
    
    for (int firstDwarf = 0; firstDwarf < 9; firstDwarf++) {
        for (int secondDwarf = firstDwarf+1; secondDwarf < 9; secondDwarf++) {
    
            if (total - dwarves[firstDwarf] - dwarves[secondDwarf] == 100) {
                for (int dwarfIdx = 0; dwarfIdx < 9; dwarfIdx++) {
                    if (dwarfIdx != firstDwarf && dwarfIdx != secondDwarf) {
                        cout << dwarves[dwarfIdx] << endl;
                    }
                } return 0;
            }
        }
    }
}