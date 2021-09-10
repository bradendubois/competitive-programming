#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int score = 0;
    int atBat = 0;

    int in;
    while (n--) {
        cin >> in;

        if (in == -1) continue;

        score += in;
        atBat++;
    }

    cout << (double) score / (double) atBat << endl;
}