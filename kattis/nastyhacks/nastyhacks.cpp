#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int r, e, c;
        cin >> r >> e >> c;

        int ifAdvertise = e - c;

        if (r > ifAdvertise) {
            cout << "do not advertise" << endl;
        } else if (r == ifAdvertise) {
            cout << "does not matter" << endl;
        } else {
            cout << "advertise" << endl;
        }
    }

    return 0;
}