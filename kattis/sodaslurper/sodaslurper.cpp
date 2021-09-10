#include <iostream>

using namespace std;

int main() {
    int e, f, c, drank = 0;
    cin >> e >> f >> c;
    e += f;
    while (e >= c) {
        int r = e % c;
        e /= c;
        drank += e;
        e += r;
    }

    cout << drank << endl;
}