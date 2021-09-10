#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int TB = 0, LR = 0;
    string s;

    while (N--) {
        cin >> s;
        if (s.at(0) == '0') TB++;
        if (s.at(1) == '0') TB++;
        if (s.at(2) == '0') LR++;
        if (s.at(3) == '0') LR++;
    }

    int swords = (TB < LR ? TB / 2 : LR / 2);
    cout << swords << " " << TB - swords * 2 << " " << LR - swords * 2 << endl;
}