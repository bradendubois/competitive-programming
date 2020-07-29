#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    double a, b, c;

    while (cin >> a >> b >> c && a && b && c) {

        vector<double> t{a, b, c};
        sort(t.begin(), t.end());

        if (sqrt(t[0] * t[0] + t[1] * t[1]) == t[2]) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
}