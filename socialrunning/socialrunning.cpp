#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> distances(N);
    for (auto & distance : distances) {
        cin >> distance;
    }

    vector<vector<int>> runners;
    for (int i = 0; i < N; i++) {
        vector<int> runner;
        for (int j = 0; j < N; j++) {
            runner.push_back(distances[(i+j)%N]);
        } runners.push_back(runner);
    }

    int minimum = INT32_MAX, cur;
    for (int lastRunner = 0; lastRunner < N; lastRunner++) {
        cur = runners[lastRunner].back() + runners[(lastRunner+1)%N].front();
        if (cur < minimum)
            minimum = cur;
    } cout << minimum << endl;
}
