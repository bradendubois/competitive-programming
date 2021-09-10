#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    string last;
    cin >> last;

    char starter = last.at(last.size()-1);

    int n;
    cin >> n;

    map<char, vector<string>> charStart;

    while (n--) {
        string unsaid;
        cin >> unsaid;
        charStart[unsaid.at(0)].push_back(unsaid);
    }

    if (charStart[starter].size() == 0) {
        cout << "?" << endl;
        return 0;
    }


    for (auto a : charStart[starter]) {
        if (charStart[a.at(a.size()-1)].size() == 0 || 
        (charStart[a.at(0)].size() == 1 && a.at(0) == a.at(a.size()-1))) {
            cout << a << "!" << endl;
            return 0;
        }
    }

    cout << charStart[starter][0] << endl;
}