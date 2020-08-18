#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {

    int m, n;
    cin >> m >> n;

    map<string, long> word_map;

    string word;
    int cost;
    while (m--) {
        cin >> word >> cost;
        word_map[word] = cost; 
    }

    int total;
    while (n--) {

        total = 0;
        while (cin >> word && word.compare(".")) {
            if (word_map.count(word)) {
                total += word_map[word];
            }
        } cout << total << endl;
    }
}