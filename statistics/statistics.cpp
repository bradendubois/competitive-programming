#include <iostream>

using namespace std;

int main() {
    int n, cases = 0;
    while (cin >> n) {
        cases++;
        int min = INT32_MAX, max = INT32_MIN;
        while (n--) {
            int x;
            cin >> x;
            if (x < min) min = x;
            if (x > max) max = x;
        }
        cout << "Case " << cases << ": " << min << " " << max << " " << max - min << endl;
    }
}