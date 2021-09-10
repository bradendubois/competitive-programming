#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(10);

    double R;
    cin >> R;
    cout << M_PI * (R * R) << endl;
    cout << R * R * 2 << endl;
}