#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    if ((X * 4 + Y * 3) % 2 == 0) cout << "possible" << endl;
    else cout << "impossible" << endl;
}