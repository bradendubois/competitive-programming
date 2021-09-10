#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, H;
    cin >> N >> H;

    vector<int> stalactites(H, 0);
    vector<int> stalagmites(H, 0);

    bool stalagmite = true;

    int height;
    while (N--) {
        cin >> height;

        if (stalagmite) stalagmites[H-height]++;
        else stalactites[height-1]++;
        
        stalagmite = !stalagmite;
    }

    int tally = 0;
    for (int i = H-1; i >= 0; i--) {
        stalactites[i] += tally;
        tally = stalactites[i];
    }

    tally = 0;
    for (int i = 0; i < H; i++) {
        stalagmites[i] += tally;
        tally = stalagmites[i];
    }

    int min = INT32_MAX;
    int count;

    for (int i = 0; i < H; i++) {
        int total = stalactites[i] + stalagmites[i];
        if (total < min) {
            min = total;
            count = 1;
        } else if (total == min) count++;
    }

    cout << min << " " << count << endl;
}