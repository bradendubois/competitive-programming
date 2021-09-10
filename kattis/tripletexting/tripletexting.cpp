#include <iostream>
#include <string.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    for (int i = 0; i < s.length() / 3; i++) {
        if (s.at(i) == s.at(i + (s.length() / 3)))
            cout << s.at(i);
        else
            cout << s.at(i + (s.length() / 3 * 2));
    } cout << endl;
}