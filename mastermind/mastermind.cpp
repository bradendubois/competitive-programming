#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;

    string code, guess, codeMiss, guessMiss;
    cin >> code >> guess;

    int r = 0, s = 0;
    for (int i = 0; i < n; i++) {
        if (code[i] == guess[i]) {
            r++;
        } else {
            codeMiss.push_back(code[i]);
            guessMiss.push_back(guess[i]);
        }
    }

    while (!codeMiss.empty()) {
        int foundIndex = guessMiss.find(codeMiss[0]);
        if (foundIndex >= 0) {
            s++;
            guessMiss.erase(guessMiss.begin() + foundIndex);
        } codeMiss.erase(codeMiss.begin());
    }

    cout << r << " " << s << endl;
}
