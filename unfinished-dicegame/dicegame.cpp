#include <iostream>

using namespace std;

int main() {
    int a1, b1, a2, b2, a3, b3, a4, b4;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;

    double gunnar = ((a1 + b1) / 2) + ((a2 + b2) / 2);
    double emma = ((a3 + b3) / 2) + ((a4 + b4) / 2);

    if (gunnar > emma) cout << "Gunnar" << endl;
    if (emma > gunnar) cout << "Emma" << endl;
    if (gunnar == emma) cout << "Tie" << endl;
}