#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n != -1) {
        
        int s, t, total = 0, prev = 0;

        while (n--) {
            cin >> s >> t;
            total += (t - prev) * s;
            prev = t;
        }

        cout << total << " miles" << endl;
        cin >> n;
    }
}