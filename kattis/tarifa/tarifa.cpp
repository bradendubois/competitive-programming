#include <iostream>

using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    int total = X;

    // Each month, add the amount *leftover* to the total
    for (int i = 0; i < N; i++) {
        int used;
        cin >> used;
        total += (X - used);
    }

    cout << total << endl;
}