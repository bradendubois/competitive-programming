#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main() {

    map<string, bool> defined;
    map<string, int> defs;

    string eval, x, y, z;
    int i;

    while (cin >> eval) {
        if (!eval.compare("define")) {
            cin >> i >> x;
            defined[x] = true;
            defs[x] = i;
        } else {
            
            cin >> x >> y >> z;
            if (!defined[x] || !defined[z]) {
                cout << "undefined" << endl;
                continue;
            }

            if (!y.compare("<")) 
                cout << (defs[x] < defs[z] ? "true" : "false") << endl;
            else if (!y.compare(">"))
                cout << (defs[x] > defs[z] ? "true" : "false") << endl;
            else
                cout << (defs[x] == defs[z] ? "true" : "false") << endl;            
        }
    }
}