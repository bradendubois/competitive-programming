#include <iostream>

using namespace std;

int main() {
    int N, a, b, c;
    cin >> N;

    while (N--) {
        cin >> a >> b >> c;

        if (a + b == c || a - b == c || a * b == c || (double) a / (double) b == (double) c) {
            cout << "Possible" << endl;
        } else if (b + a == c || b - a == c || b * a == c || (double) b / (double) a == (double) c) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
}