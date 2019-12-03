#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int R;
    string N;

    map<char, int> toPos;
    map<int, char> toChar;
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    for (int i = 0; i < chars.size(); i++) {
        toPos[chars.at(i)] = i;
        toChar[i] = chars.at(i);
    }

    while (cin >> R && R > 0) {
        cin >> N;
        reverse(N.begin(), N.end());
        for (auto i : N) cout << toChar[(toPos[i] + R) % chars.size()];
        cout << endl;
    }
}