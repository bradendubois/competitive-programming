#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {

        vector<int> values;
        int total = 0;

        stringstream conv(line);

        while (conv.good()) {
            int val;
            conv >> val;
            values.push_back(val);
            total += val;
        }

        for (int i : values) {
            if (total - i == i) {
                cout << i << endl;
                break;
            }
        }
    }
}