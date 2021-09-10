#include <iostream>

using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    cout << fixed;
    cout.precision(9);

    if (X == 0 && Y == 1)
        cout << "ALL GOOD" << endl;
    else if (Y == 1)
        cout << "IMPOSSIBLE" << endl;
    else
        cout << X / (1.0 - Y) << endl;
}
