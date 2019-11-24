#include <iostream>
#include <map>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;

        int unique = 0;
        map<string, int> trips;

        for (int j = 0; j < n; j++) {
            string city;
            cin >> city;
            if (trips[city] == 0) {
                trips[city] = 1;
                unique++;
            }
        }

        cout << unique << endl;
    }

    return 0;
}