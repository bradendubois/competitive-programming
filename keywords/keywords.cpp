#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    map<string, bool> word_map;
    int n = stoi(line), total = 0;

    while (n--) {

        getline(cin, line);
        string cleaned = "";

        for (auto c : line) {
            if (isalpha(c))
                cleaned.push_back(tolower(c));
            else if (c == ' ' || c == '-')
                cleaned.push_back(' ');
            else
                cleaned.push_back(c);
        }

        if (!word_map[cleaned]) {
            total++;
            word_map[cleaned] = true;
        }   
    }

    cout << total << endl;
}
