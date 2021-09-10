#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, s, t, min = 365, max = 1, total = 0;
    cin >> N;

    map<int, int> days;

    while (N--) {
        cin >> s >> t;
        for (int i = s; i <= t; i++) {
            days[i]++;
        }

        if (s < min) min = s;
        if (t > max) max = t;
    }

    for (int i = min; i <= max; i++) {
        if (days[i] > 0) total++;
    }

    cout << total << endl;
}