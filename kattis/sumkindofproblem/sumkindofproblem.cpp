#include <iostream>

using namespace std;

int main() {
    int P;
    cin >> P;

    while (P--) {
        int K, N;
        cin >> K >> N;
        int pos = (N * (N + 1)) / 2, odd = N * N, even = odd + N;
        cout << K << " " << pos << " " << odd << " " << even << endl;
    }
}