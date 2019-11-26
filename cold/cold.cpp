#include <iostream>

using namespace std;

int main() {
    int n, t, total = 0;
    cin >> n;

    while (n--) {
        cin >> t;
        if (t < 0) total++;
    }

    cout << total << endl;
}