#include <iostream>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    if (l == 0 && r == 0) {
        cout << "Not a moose" << endl;
        return 0;
    }

    if (l == r) cout << "Even " << l + r << endl;
    if (l != r) cout << "Odd " << (l > r ? l : r) * 2 << endl;
}