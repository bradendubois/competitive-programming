#include <iostream>

using namespace std;

int main() {
    int n, d, v = INT32_MAX;
    cin >> n;
    d = n;

    int in;
    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in < v) {
            v = in;
            d = i;
        }
    }

    cout << d << endl;
}