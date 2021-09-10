#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    string alpha_str = "abcdefghijklmnopqrstuvwxyz", line;
    int N;
    cin >> N;
    
    getline(cin, line);
    while (N--) {
        getline(cin, line);
        map<char, int> charMap;

        for (int i = 0; i < line.size(); i++) {
            char cur = line.at(i);
            if (isalpha(cur)) charMap[tolower(cur)]++;
        }

        vector<char> missing;
        for (int i = 0; i < alpha_str.size(); i++) {
            char cur = alpha_str.at(i);
            if (charMap[cur] == 0) missing.push_back(cur);
        }

        if (missing.size() == 0) {
            cout << "pangram" << endl;
            continue;
        } else {
            cout << "missing ";
            for (int i = 0; i < missing.size(); i++) {
                cout << missing[i];
            } cout << endl;
        }
    }
}