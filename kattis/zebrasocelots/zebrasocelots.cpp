#include <iostream>

using namespace std;

int main() {
    long N, total = 0;
    char c;

    cin >> N;

    while (N--) {
        cin >> c;
        if (c == 'O') total += (1L << N);
    }

    cout << total << endl;
}