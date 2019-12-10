#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

bool match(vector<string> & a, vector<string> & b) {
    for (int i = 0; i < a.size(); i++) {
        if (strcmp(a[i].c_str(), b[i].c_str()) != 0) return false;
    } return true;
}

int main() {
    int N;
    cin >> N;

    vector<string> original;
    vector<string> sortable;

    while (N--) {
        string name;
        cin >> name;
        original.push_back(name);
        sortable.push_back(name);
    }   

    sort(sortable.begin(), sortable.end());

    if (match(original, sortable)) {
        cout << "INCREASING" << endl;
        return 0;
    }
    reverse(sortable.begin(), sortable.end());
    if (match(original, sortable)) {
        cout << "DECREASING" << endl;
    } else {
        cout << "NEITHER" << endl;
    }
}