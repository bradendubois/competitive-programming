#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int cx, cy, n;
    cin >> cx >> cy >> n;

    int x, y, r;
    float distance;
    vector<int> acceptable(n);
    for (auto & t : acceptable) {
        cin >> x >> y >> r;
        t = hypot(abs(cx - x), abs(cy - y)) - r;
    }

    sort(acceptable.begin(), acceptable.end());
    cout << max(0, acceptable[2]) << endl;
}