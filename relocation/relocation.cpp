#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    map<int, int> locations;
    int c;
    for (int i = 1; i <= N; i++) {
        cin >> c;
        locations[i] = c;
    }

    int A, B, C;
    while (Q--) {
        cin >> A >> B >> C;
        if (A == 1) locations[B] = C;
        else cout << abs(locations[B] - locations[C]) << endl;
    }
}