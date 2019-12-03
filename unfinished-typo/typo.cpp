#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> wordMap;
    vector<string> words;
    hash<string> hasher;

    string in;
    while (n--) {
        cin >> in;
        words.push_back(in);
        wordMap[hasher(in)]++;
    }

    reverse(words.begin(), words.end());

    bool typo = false;
    string i;
    int s = words.size();
    while (s--) {

        i = words.back();
        words.pop_back();
        
        if (wordMap[hasher(i.substr(1))] > 0 || wordMap[hasher(i.substr(0, i.size() - 1))] > 0) {
            cout << i << endl;
            typo = true;
            continue;
        } else {
            for (int m = 1; m < i.size() - 1; m++) {
                if (wordMap[hasher(i.substr(0, m) + i.substr(m+1))] > 0) {
                    cout << i << endl;
                    typo = true;
                    break;
                }
            }
        }
    }

    if (!typo) {
        cout << "NO TYPOS" << endl;
    }
}