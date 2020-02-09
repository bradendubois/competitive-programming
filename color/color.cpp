#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int S, C, K;
    cin >> S >> C >> K;
    
    vector<int> socks;
    int sock;
    while (S--) {
        cin >> sock;
        socks.push_back(sock);
    }

    sort(socks.begin(), socks.end());

    int machines = 1, machine_total = 0, color_id_start = socks[0];
    for (auto s : socks) {
        if (machine_total < C && abs(s - color_id_start) <= K) {
            machine_total++;
        } else {
            machine_total = 1;
            machines++;
            color_id_start = s;
        }
    }

    cout << machines << endl;
}