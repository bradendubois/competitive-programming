#include <iostream>
#include <string.h>

using namespace std;

int main() {

    string line;
    int cases = 0;

    while (cin >> line && line.find("END") == string::npos) {
        cases++;

        if (line.find(".") == string::npos) {
            cout << cases << " " << "EVEN" << endl;
            continue;
        }

        int cursor = 0;
        string msg = "*";
        while (line.at(cursor+1) != '*') {
            cursor++;
            msg += ".";
        }

        bool error = false;
        for (int i = 0; i < line.length()-1; i += msg.length()) {
            if (line.substr(i, msg.length()).compare(msg) != 0) {
                error = true;
                break;
            }
        }

        if (error) {
            cout << cases << " " << "NOT EVEN" << endl;
        } else {
            cout << cases << " EVEN" << endl;
        }
    }
}