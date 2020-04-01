#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, in, balloon;
    cin >> n;
    
    vector<int> canisters;

    while (n--) {
        cin >> in;
        canisters.push_back(in);
    }

    sort(canisters.begin(), canisters.end());

    double lowestRatio = INT32_MAX;
    for (int i = 0; i < canisters.size(); i++) {
        balloon = i+1;
        int canister = canisters[i];

        if (canister > balloon) {
            cout << "impossible" << endl;
            return 0;
        }

        double ratio = (double) canister / (double) balloon;
        if (ratio < lowestRatio)
            lowestRatio = ratio;
    }

    cout << lowestRatio << endl;
}
