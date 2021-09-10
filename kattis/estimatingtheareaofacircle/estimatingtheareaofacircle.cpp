#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double r, m, c;

    while (cin >> r >> m >> c && r) {
        cout << (M_PI * (r*r)) << " " << (pow((2*r),2) * (c/m)) << endl;
    }
}