#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int prev, next, total = 0;
        cin >> prev;

        while (cin >> next && next != 0) {
            if (next > 2 * prev) total += next - (2 * prev);
            prev = next;
        }

        cout << total << endl;
    }
}