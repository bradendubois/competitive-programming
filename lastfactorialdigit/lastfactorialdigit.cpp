#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        for (int j = N - 1; j >= 1; j--) {
            N *= j;
        } cout << N % 10 << endl;
    }

    return 0;
}