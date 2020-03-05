#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    string line, english, foreign;
    map<string, string> dictionary;

    while(getline(cin, line) && line.size()) {
        stringstream(line) >> english >> foreign;
        dictionary[foreign] = english;
    }

    while (getline(cin, line)) {
        if (dictionary[line].size())
            cout << dictionary[line] << endl;
        else cout << "eh" << endl;
    } 
}
