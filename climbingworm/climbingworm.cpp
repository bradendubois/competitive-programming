#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b, h, at = 0, climbs = 0;
    cin >> a >> b >> h;

    while (at < h) {
        at += a;
        climbs++;
        if (at >= h) break;
        at -= b;
    } cout << climbs << endl;
}
