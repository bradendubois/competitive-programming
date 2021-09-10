#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long double D, V;
    cout << fixed << setprecision(10);
    while (cin >> D >> V && D != 0) {
        cout << pow((pow(D, 3) - (6 * V / M_PI)), (1.0/3.0)) << endl;
    }    
}