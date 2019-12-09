#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double distance(int x, int y, int x1, int y1) {
    return hypot(abs(x - x1), abs(y - y1));
}

int main() {
    double x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(10);
    
    double result, minimum = INT32_MAX;
    
    result = distance(x, y, x1, y1);
    if (result < minimum) minimum = result; 
    result = distance(x, y, x1, y2);
    if (result < minimum) minimum = result;
    result = distance(x, y, x2, y1);
    if (result < minimum) minimum = result;
    result = distance(x, y, x2, y2);
    if (result < minimum) minimum = result;

    if (y >= y1 && y <= y2) minimum = min(abs(x - x1), abs(x - x2));
    if (x >= x1 && x <= x2) minimum = min(abs(y - y1), abs(y - y2));
    
    cout << minimum << endl;
}