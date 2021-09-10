#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    string thore = "ThoreHusfeldt";
    string subThore = thore.substr(0, thore.size()-1);

    vector<string> names;

    while (n--) {
        string in;
        cin >> in;
        names.push_back(in);
    }

    if (strcmp(names[0].c_str(), thore.c_str()) == 0) {
        cout << "Thore is awesome" << endl;
        return 0;
    }

    for (auto name : names) {
        if (strcmp(thore.c_str(), name.c_str()) == 0) break;
        else if (name.find(subThore) != string::npos) {
            cout << "Thore sucks" << endl;
            return 0;            
        }
    }

    int t = 0;
    for (auto name : names) {
        if (strcmp(name.c_str(), thore.c_str()) == 0) break;
        t++;
    }

    int sub = 1;
    while (sub < thore.size()) {
        
        string temp = thore.substr(0, sub);
        bool match = false;
        
        for (int i = 0; i < t; i++) {
            if (strcmp(temp.c_str(), names[i].substr(0, sub).c_str()) == 0)
                match = true;
        }

        if (!match) {
            break;
        } sub++;
    } cout << thore.substr(0, sub) << endl;
}
