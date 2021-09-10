#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {

    int k, m, r, c, in;
    while (cin >> k >> m) {
        set<int> taken;
        while (k--) {
            cin >> in;
            taken.insert(in);
        }

        bool insufficient = false;

        while (m--) {
            cin >> c >> r;
            int has = 0;
            while (c--) {
                cin >> in;
                has += taken.count(in);
            }

            if (has < r)
                insufficient = true;
        }

        if (insufficient)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
}