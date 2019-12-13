#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        
        map<string, vector<string>> ordered;
        vector<string> items;
        
        string line;
        getline(cin, line);

        while (n--) {
            getline(cin, line);
            stringstream conv(line);

            string name;
            conv >> name;

            while (conv.good()) {
                string item;
                conv >> item;
                if (ordered[item].size() == 0) {
                    items.push_back(item);
                }
                ordered[item].push_back(name);
            }
        }

        sort(items.begin(), items.end());

        for (auto item : items) {
            cout << item << " ";

            vector<string> patrons = ordered[item];
            sort(patrons.begin(), patrons.end());
            for (auto patron : patrons) {
                cout << patron << " ";
            }

            cout << endl;
        } cout << endl;


    }
}