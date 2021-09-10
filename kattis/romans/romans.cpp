#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double conversion = 1000 * (5280.0 / 4854.0);
    double X;
    cin >> X;
    cout << (int) round(X * conversion) << endl;
}