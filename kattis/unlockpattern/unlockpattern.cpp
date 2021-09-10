#include <iostream>
#include <math.h>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    map<int, int> x_vals;
    map<int, int> y_vals;
    int row = 2, x = 0, y = 2, in;
    while (row-- >= 0) {
        int col = 0;
        while (col++ < 3) {
            cin >> in;
            x_vals[in] = col;
            y_vals[in] = row;
        }
    }

    double strength = 0; 
    int x1, x2, y1, y2;
    for (int i = 1; i < 9; i++) {
        x1 = x_vals[i], y1 = y_vals[i];
        x2 = x_vals[i+1], y2 = y_vals[i+1];

        strength += sqrt((pow(abs(x2 - x1), 2)) + (pow(abs(y2 - y1), 2)));
    }

    cout << fixed << setprecision(10);
    cout << strength << endl;
}