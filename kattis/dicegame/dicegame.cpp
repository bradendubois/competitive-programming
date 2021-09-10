#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a1, b1, a2, b2, a3, b3, a4, b4;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;

    int gunnar = 0;
    int emma = 0;

    // All of Gunnar's possible rolls
    for (int g_a = a1; g_a <= b1; g_a++) {
        for (int g_b = a2; g_b <= b2; g_b++) {

            // All of Emma's possible rolls
            for (int e_a = a3; e_a <= b3; e_a++) {
                for (int e_b = a4; e_b <= b4; e_b++) {
                    
                    int gunnar_roll = g_a + g_b;
                    int emma_roll = e_a + e_b;

                    if (gunnar_roll > emma_roll) gunnar++;
                    else if (emma_roll > gunnar_roll) emma ++;
                }
            }

        }
    }
    
    if (gunnar > emma) cout << "Gunnar" << endl;
    if (emma > gunnar) cout << "Emma" << endl;
    if (gunnar == emma) cout << "Tie" << endl;
}