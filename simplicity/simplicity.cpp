#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool sortChars(pair<char, int> a, pair<char, int> b) {
    return a.second < b.second;
}

int main() {

    int unique = 0;

    string in;
    cin >> in;

    map<char, int> count;
    for (auto c : in) {
        if (!count[c]) 
            unique++;

        count[c]++;
    }

    if (unique <= 2) {
        cout << 0 << endl;
        return 0;
    }

    vector<pair<char, int>> letters;
    for (auto key : count) {
        pair<char, int> letter;
        letter.first = key.first;
        letter.second = key.second;
        letters.push_back(letter);
    }

    sort(letters.begin(), letters.end(), sortChars);

    int total = 0;
    for (int i = 0; i < letters.size()-2; i++) {
        total += letters[i].second;
    } cout << total << endl;
}
