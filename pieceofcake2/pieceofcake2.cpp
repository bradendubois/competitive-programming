#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, h, v;
    cin >> n >> h >> v;
    cout << 4 * max(h, n-h) * max(v, n-v) << endl;
    return 0;
}