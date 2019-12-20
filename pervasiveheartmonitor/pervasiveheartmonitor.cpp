#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool noDigits(string s) {
    for (auto c : s) {
        if (isdigit(c)) return false;
    } return true;
}

int main() {
    string line;
    while (getline(cin, line)) {
        stringstream conv(line);
        
        double total = 0.0;
        int measurements = 0;
        vector<string> names;
        
        while (conv.good()) {
            string out;
            conv >> out;

            if (noDigits(out)) names.push_back(out);
            else {
                total += stod(out);
                measurements++;
            }
        }

        cout << total / measurements << " ";
        for (auto name : names) cout << name << " ";
        cout << endl;
    }
}