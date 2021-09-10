#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    map<char, int> counts;
    vector<char> unique;
    
    string word, order;
    cin >> word >> order;

    for (auto c : word) {
        if (!counts[c]) {
            unique.push_back(c);
        } counts[c]++;
    }

    for (auto c : unique) {
        for (int i = unique.size()+9; i < order.size(); i++) {
            if (c == order.at(i)) {
                cout << "LOSE" << endl;
                return 0;
            }
        }
    }
    
    cout << "WIN" << endl;
}