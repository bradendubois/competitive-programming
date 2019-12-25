#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        char change;
        cin >> change;

        int D, H, M;
        cin >> D >> H >> M;

        if (change == 'F') {
            M += D;
            H += M / 60;
        } else {
            M -= D;
            while (M < 0) {
                H -= 1;
                M += 60;
            }

            while (H < 0) H += 24;
        }

        H %= 24;
        M %= 60;

        cout << H << " " << M << endl;
    }
}