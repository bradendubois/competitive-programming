#include <iostream>
#include <math.h>

using namespace std;

int GCD(int a, int b) {

    while (a != b) {
        if(a > b) a -= b;
        else b -= a;
    } return a;
}

int main() {
    
    int N, ring;
    cin >> N;

    int rings [N];

    for (int i = 0; i < N; i++) {
        cin >> ring;
        rings[i] = ring;
    }

    for (int i = 1; i < N; i++) {
        int gcd = GCD(rings[0], rings[i]);
        cout << rings[0] / gcd << "/" << rings[i] / gcd << endl;
    }
}