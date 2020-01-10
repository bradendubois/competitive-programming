#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x1, y1, x2, y2, p;
    while (cin >> x1 >> y1 >> x2 >> y2 >> p) {
        cout << pow((pow(abs(x1 - x2), p) + pow(abs(y1 - y2), p)), (1/p)) << endl;
    }
}
