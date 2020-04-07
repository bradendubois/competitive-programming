#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;

bool sortWords(pair<string, int> a, pair<string, int> b) {
    if (a.second < b.second) 
        return true;
    else return a.first > b.first;
}

int main() {

    string line, temp;
    getline(cin, line);

    map<string, int> wordCount;
    
    int n = stoi(line);
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        stringstream conv(line);
        conv >> temp; // Discard username
        while (conv.good()) {
            conv >> temp;
            wordCount[temp]++;
        }
    }

    vector<pair<string, int>> words;
    for (auto key : wordCount) {
        if (key.second < n)
            continue;

        pair<string, int> word;
        word.first = key.first;
        word.second = key.second;
        words.push_back(word);
    }

    if (words.empty()) {
        cout << "ALL CLEAR" << endl;
        return 0;
    }

    sort(words.begin(), words.end(), sortWords);
    int max = words[0].second;
    for (auto word: words) {
        if (word.second < max)
            return 0;
        cout << word.first << endl;
    }
}
