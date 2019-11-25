#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        string first, second;
        cin >> first >> second;
        cout << first << endl << second << endl;

        for (int i = 0; i < first.size(); i++) {
            if (first.at(i) == second.at(i)) cout << ".";
            else cout << "*";
        } cout << endl << endl;
    }
}