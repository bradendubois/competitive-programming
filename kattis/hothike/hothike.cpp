#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    
    vector<int> temps;
    while (n--) {
        cin >> x;
        temps.push_back(x);
    }

    pair<int, int> mins;
    mins.second = INT32_MAX;
    for (int i = 0; i < temps.size() - 2; i++) {
        int max = temps[i] > temps[i+2] ? temps[i] : temps[i+2];
        if (max < mins.second) {
            mins.first = i + 1;
            mins.second = max;
        }
    }

    cout << mins.first << " " << mins.second << endl;
}