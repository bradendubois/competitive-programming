#include <iostream>

using namespace std;

int main() {

    int x = 0, y = 0, t;
    string xs, ys;
    cin >> xs >> ys;

    for (auto c : xs) {
        if (c == 'S') x++;
    }

    for (auto c : ys) {
        if (c == 'S') y++;
    }

    t = x * y;
    while (t--) {
        cout << "S(";
    }

    cout << 0;

    t = x * y;
    while (t--) {
        cout << ")";
    } cout << endl;
}