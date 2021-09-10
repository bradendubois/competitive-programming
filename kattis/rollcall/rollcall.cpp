#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<string, string> name;

bool sorting(name a, name b) {
    if (a.second == b.second) return a.first < b.first;
    else return a.second < b.second;

}

int main() {

    string first, second;
    vector<name> names;
    map<string, int> firstNameCount;

    while (cin >> first >> second) {
        name in;
        in.first = first;
        in.second = second;
        names.push_back(in);
        firstNameCount[first]++;
    }

    sort(names.begin(), names.end(), sorting);
    for (auto n : names) {
        cout << n.first;
        if (firstNameCount[n.first] > 1) cout << " " + n.second;
        cout << endl;
    }
}