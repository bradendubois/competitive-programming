#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> direction = {
        {"North", 0},
        {"East", 1},
        {"South", 2},
        {"West", 3}
    };

    string a, b, c;
    cin >> a >> b >> c;

    int approach = direction[a], leave = direction[b], other = direction[c]; 

    if (leave == (approach + 2) % 4 && approach == (other + 1) % 4) {
        cout << "Yes" << endl;
        return 0;
    }

    if (leave == (approach + 1) % 4 && other != (approach + 1) % 4) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}