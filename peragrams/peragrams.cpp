#include <iostream>
#include <map>
#include <math.h>

using namespace std;

int main() {

    map<char, int> count;

    string s;
    cin >> s;

    for (auto c: s) count[c]++;

    int odds = 0;
    for (auto k : count) {
        if (k.second % 2 != 0)
            odds++;
    }

    cout << max(0, odds-1) << endl;
}