#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y, N;
    double r, result, r_pow, err = 1e-9;

    while (true) {

        cin >> X >> Y >> N >> r;
        if (X == 0) exit(0);

        N *= 12;
        r = (r / 1200) + 1;

        if (abs(1.0L - r) <= err) {
            if (X - N * Y <= err) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else {
            r_pow = pow(r, N);
            if (X * r_pow - 1.0L * Y * (r_pow - 1.0L) / (r - 1.0L) <= err) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
}