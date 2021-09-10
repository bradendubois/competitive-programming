#include <iostream>
#include <math.h>

typedef long long ll;

ll fac(ll n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fac(n-1);
}

int main() {

    ll m, n, t;
    scanf("%lld %lld %lld\n", &m, &n, &t);

    if (t == 1 && n <= 12 && fac(n) <= m)
        printf("AC\n");
    else if (t == 2 && pow(2, n) <= m)
        printf("AC\n");
    else if (t == 3 && pow(n, 4) <= m)
        printf("AC\n");
    else if (t == 4 && pow(n, 3) <= m)
        printf("AC\n");
    else if (t == 5 && pow(n, 2) <= m)
        printf("AC\n");
    else if (t == 6 && n * log2(n) <= m)
        printf("AC\n");
    else if (t == 7 && n <= m)
        printf("AC\n");

    else
        printf("TLE\n");
}