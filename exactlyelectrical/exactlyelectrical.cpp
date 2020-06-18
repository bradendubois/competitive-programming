#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;

    int distance = abs(a - c) + abs(b - d);
    if (distance <= t && (t - distance) % 2 == 0) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
}
