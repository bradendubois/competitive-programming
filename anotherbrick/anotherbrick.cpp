#include <iostream>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    int bricks [n];
    for (int i = 0; i < n; i++) {
        int brick;
        cin >> brick;
        bricks[i] = brick;
    }

    int layers = 0, horizontal = 0;
    for (auto brick : bricks) {
        horizontal += brick;
        if (horizontal == w) {
            horizontal = 0;
            layers++;
        }

        if (layers == h) {
            cout << "YES" << endl;
            return 0;
        }
    } cout << "NO" << endl;
}