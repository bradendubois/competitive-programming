#include <iostream>
#include <map>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    map<int, int> costs;
    costs[1] = A;
    costs[2] = B;
    costs[3] = C;

    map<int, int> parked;
    int s, t, min = INT32_MAX, max = 0;
    while (cin >> s >> t) {
        for (int i = s; i < t; i++) {
            parked[i]++;
        }

        if (s < min) min = s;
        if (t > max) max = t;
    }

    int cost = 0;
    for (int i = min; i <= max; i++) cost += costs[parked[i]] * parked[i];

    cout << cost << endl;
}