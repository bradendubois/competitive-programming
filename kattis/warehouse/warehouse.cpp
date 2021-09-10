#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        map<string, int> toy_count;
        vector<string> toys;

        while (N--) {
            string toy;
            int shipment;
            cin >> toy >> shipment;

            if (!toy_count[toy]) toys.push_back(toy);
            toy_count[toy] += shipment;
        }

        map<int, vector<string>> sorting_toys;
        vector<int> amounts;
        
        for (auto toy : toys) {
            if (!sorting_toys[toy_count[toy]].size()) {
                amounts.push_back(toy_count[toy]);
            } sorting_toys[toy_count[toy]].push_back(toy);
        }

        sort(amounts.begin(), amounts.end());
        reverse(amounts.begin(), amounts.end());

        cout << toys.size() << endl;

        for (auto amount : amounts) {
            vector<string> amount_toy = sorting_toys[amount];
            sort(amount_toy.begin(), amount_toy.end());

            for (auto toy : amount_toy) {
                cout << toy << " " << amount << endl;
            }
        }
    }
}