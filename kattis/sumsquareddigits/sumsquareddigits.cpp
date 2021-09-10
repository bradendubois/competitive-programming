#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int P;
    cin >> P;

    while (P--) {
        int K, b, n;
        cin >> K >> b >> n;

        int converted = 0;
        while (n != 0) {
            converted += (n % b) * (n % b);
            n /= b;
        }

        cout << K << " " << converted << endl;
    }
}