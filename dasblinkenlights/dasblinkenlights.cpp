#include <iostream>

using namespace std;

int main() {
    int p, q, s;
    cin >> p >> q >> s;

    // Try all intervals of p within the limit
    for (int i = 1; i * p <= s; i++) {
        // Try all intervals of q within the limit
        for (int j = 1; j * q <= s; j++) {
            // If these match, they blink together
            if (i * p == j * q) {
                cout << "yes" << endl;
                return 0;
            }
        }
    }

    cout << "no" << endl;
    return 0;
}