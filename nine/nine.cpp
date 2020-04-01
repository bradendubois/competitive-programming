#include <iostream>

using namespace std;

typedef long long ll;

ll exponent(ll base, ll exp, ll mod) {
    
    ll total = 1;

    while (exp) {
        
        if (exp & 1)
            total  = (total  * base) % mod;

        base = (base * base) % mod;
        exp /= 2;
    } return total  % mod;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll T, d, mod = 1000000007;
    cin >> T;

    while (T--) {
        cin >> d;

        d--;
        cout << 8 * exponent(9, d, mod) % mod << endl;
    }
}
