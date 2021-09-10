#include <iostream>

using namespace std;

int main() {
    int P;
    cin >> P;

    while (P--) {
        int K, N, candles;
        cin >> K >> N;

        candles = (N * (N + 1)) / 2 + N;
        cout << K << " " << candles << endl;
    }
}