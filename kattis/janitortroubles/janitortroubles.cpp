#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double semi = (a + b + c + d) / 2;
    double area = sqrt((semi - a) * (semi - b) * (semi - c) * (semi - d));
    cout << fixed << setprecision(10) << area << endl;
}