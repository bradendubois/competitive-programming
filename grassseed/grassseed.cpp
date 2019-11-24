#include <iostream>
#include <iomanip>

using namespace std; 

int main() {
    double C, L, total;
    cin >> C >> L;
    total = 0;

    for (int i = 0; i < L; i++) {
        double w, l;
        cin >> w >> l;
        total += (w * l * C);
    }

    cout << setprecision(8);
    cout << total << endl;
    return 0;
}