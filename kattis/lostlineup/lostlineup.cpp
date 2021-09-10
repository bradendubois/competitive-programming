#include <iostream>
#include <map>

using namespace std;

int main() {

    int n, d;
    cin >> n;

    map<int, int> players;

    for (int i = 2; i <= n; i++) {
        cin >> d;
        players[d] = i;
    }

    cout << 1 << " ";

    for (int i = 0; i < n-1; i++) {
        cout << players[i] << " ";
    } cout << endl;
}