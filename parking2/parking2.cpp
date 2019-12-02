#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, c;
    cin >> t;

    while (t--) {
        vector<int> stores;
        int x;
        cin >> c;
        while (c--) {
            cin >> x;
            stores.push_back(x);
        }

        sort(stores.begin(), stores.end());
        cout << (stores[stores.size()-1] - stores[0]) * 2 << endl;
    }
}