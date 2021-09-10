#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int T, k;
    cin >> T;

    while (T--) {
        cin >> k;
        cout << (1 << k)-1 << endl;
    }
}