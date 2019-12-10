#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double R, C;
    cin >> R >> C;
    cout << fixed << setprecision(10);
    cout << ((M_PI * pow(C-R, 2)) / (M_PI * pow(R, 2))) * 100 << endl;
}