#include <iostream>
#include <math.h>

using namespace std;

int mia(int a, int b) {
    return (max(a, b) * 10) + min(a, b);
}

int main() {
    int s0, s1, r0, r1;

    while (cin >> s0 >> s1 >> r0 >> r1) {
        if (!(s0 && s1 && r0 && r1)) return 0;
    
        int p1 = mia(s0, s1);
        int p2 = mia(r0, r1);

        if (p1 == p2) {
            cout << "Tie." << endl;
        } else if (p1 == 21) {
            cout << "Player 1 wins." << endl;
        } else if (p2 == 21) {
            cout << "Player 2 wins." << endl;
        } else if (((p1 % 10) == p1 / 10) && ((p2 % 10) != p2 / 10)) {
            cout << "Player 1 wins." << endl;
        } else if (((p1 % 10) != p1 / 10) && ((p2 % 10) == p2 / 10)) {
            cout << "Player 2 wins." << endl;
        } else {
            if (p1 > p2) cout << "Player 1 wins." << endl;
            else cout << "Player 2 wins." << endl;
        }    
    }
}