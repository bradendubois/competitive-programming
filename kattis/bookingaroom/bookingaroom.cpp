#include <iostream>
#include <map>

using namespace std;

int main() {
    int r, n;
    cin >> r >> n;

    if (r == n) {
         cout << "too late" << endl;
         return 0;
    }

    map<int, int> rooms;

    while (n--) {
        int room;
        cin >> room;
        rooms[room]++;
    }

    for (int i = 1; i <= r; i++) {
        if (!rooms[i]) {
            cout << i << endl;
            return 0;
        }
    }
}