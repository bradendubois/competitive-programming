#include <iostream>

using namespace std;

int main() {
    int P, T;
    cin >> P >> T;
    int solved = 0;
    while (P--) {
        int temp = T;
        bool solvable = true;
        while (temp--) {
            string in;
            cin >> in;
            for (int i = 1; i < in.size(); i++) {
                if (isupper(in.at(i))) solvable = false;
            }
        } if (solvable) solved++;
    } cout << solved << endl;
}