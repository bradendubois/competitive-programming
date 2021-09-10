#include <iostream>

using namespace std;

int main() {
    int N, k, total = 0;
    cin >> N;

    while (N--) {
        cin >> k;
        if (k < 0) total += abs(k);
    }

    cout << total << endl;
}