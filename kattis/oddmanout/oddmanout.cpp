#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int N, G, C;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> G;

        map<int, int> counts;
        vector<int> invitations;

        for (int j = 0; j < G; j++) {
            cin >> C;
            counts[C]++;
            if (counts[C] == 2) counts.erase(C); 
        }

        cout << "Case #" << i << ": " << counts.begin()->first << endl;
    }
}