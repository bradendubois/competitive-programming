#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string line;
    
    map<string, bool> perm;
    vector<string> words;
    
    while (getline(cin, line)) {
        stringstream conv(line);
        while (conv.good()) {
            string in;
            conv >> in;
            if (!perm[in]) words.push_back(in);
            perm[in] = true;
        }
    }

    perm.clear();
    vector<string> compounds;
    for (int i = 0; i < words.size()-1; i++) {
        for (int j = i+1; j < words.size(); j++) {
            if (!perm[words[i] + words[j]]) 
                compounds.push_back(words[i] + words[j]);
            perm[words[i] + words[j]] = true;
            if (!perm[words[j] + words[i]]) 
                compounds.push_back(words[j] + words[i]);
            perm[words[j] + words[i]] = true;
        }
    }

    sort(compounds.begin(), compounds.end());
    for (auto word : compounds) cout << word << endl;
}