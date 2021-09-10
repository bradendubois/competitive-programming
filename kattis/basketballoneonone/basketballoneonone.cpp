#include <iostream>

using namespace std;

int main() {
    string scoring;
    cin >> scoring;

    int A = 0, B = 0;

    for (int i = 0; i < scoring.size(); i+=2) {
        if (scoring.at(i) == 'A') A += scoring.at(i+1) - '0';
        if (scoring.at(i) == 'B') B += scoring.at(i+1) - '0';
    }

    if (A > B) cout << "A" << endl;
    else cout << "B" << endl;
}