#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main() {
    int m;
    char q;
    string a;

    map<char, int> errs;
    map<char, bool> solved;

    int total = 0, time = 0;
    while (cin >> m >> q >> a) {
        if (!solved[q]) {
            if (strcmp(a.c_str(), "right") == 0) {
                time += m + (20 * errs[q]);
                solved[q] = true;
                total++;
            } else {
                errs[q]++;
            }
        }
    }

    cout << total << " " << time << endl;
}