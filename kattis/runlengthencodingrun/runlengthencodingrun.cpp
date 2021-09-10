#include <iostream>

using namespace std;

int main() {
    string t, m;
    cin >> t >> m;

    if (t == "E") {
        int occ = 0;
        char prev = m.at(0);
        for (auto c: m) {
            if (c == prev) occ++;
            else {
                cout << prev << occ;
                occ = 1;
                prev = c;
            }
        }

        // Last character is missed by the loop
        cout << prev << occ << endl;
    }

    if (t == "D") {
        for (int i = 0; i < m.size(); i += 2) {
            int x = m.at(i+1) - '0';
            while (x--) 
            cout << m.at(i);
        } cout << endl;
    };
}