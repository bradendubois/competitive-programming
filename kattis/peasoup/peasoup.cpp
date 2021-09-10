#include <iostream>
#include <string.h>
#include <sstream>
#include <map>

using namespace std;

int main() {
    int n, k;
    string name, item, temp;

    getline(cin, temp);
    stringstream n_temp(temp);
    n_temp >> n;

    map<string, int> menu;

    while (n--) {
        getline(cin, temp);
        stringstream k_temp(temp);
        k_temp >> k;
        getline(cin, name);
        while (k--) {
            getline(cin, item);
            if (!item.compare("pea soup")) menu["pea soup"]++;
            if (!item.compare("pancakes")) menu["pancakes"]++;
        }

        if (menu["pea soup"] && menu["pancakes"]) {
            cout << name << endl;
            return 0;
        }

        menu.clear();
    }

    cout << "Anywhere is fine I guess" << endl;
}