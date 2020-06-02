#include <iostream>
#include <math.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int x = 0, y = 0;
    int range = pow(2, s.length());
    for (auto c : s) {
        if (c == '1' || c == '3') x += range / 2;
        if (c == '2' || c == '3') y += range / 2;
        range /= 2;
    }

    cout << s.length() << " " << x << " " << y << endl;
}