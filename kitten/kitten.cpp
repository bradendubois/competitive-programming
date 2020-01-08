#include <iostream>
#include <map>
#include <sstream>
#include <string.h>

using namespace std;

int main() {
    string line;
    
    int start;
    cin >> start;

    map<int, int> branches;

    getline(cin, line); // Ignore first line now

    while (getline(cin, line) && (strcmp(line.c_str(), "-1") != 0)) {
        stringstream conv(line);
        int lower;
        conv >> lower;

        while (conv.good()) {
            int branch;
            conv >> branch;
            branches[branch] = lower;
        }
    }

    while (start != 0) {
        cout << start << " ";
        start = branches[start];
    } cout << endl;
}