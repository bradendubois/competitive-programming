#include <iostream>

using namespace std;

int main() {
    string line;
    cin >> line;

    int ball = 1;

    for (int i = 0; i < line.size(); i++) {
        char move = line.at(i);

        if (move == 'A') {
            if (ball == 1 || ball == 2)
                ball = (ball == 1 ? 2 : 1);
        } else if (move == 'B') {
            if (ball == 2 || ball == 3)
                ball = (ball == 2 ? 3 : 2);
        } else {
            if (ball == 1 || ball == 3)
                ball = (ball == 1 ? 3 : 1);
        }
    }

    cout << ball << endl;
}