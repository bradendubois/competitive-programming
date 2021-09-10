#include <iostream>

using namespace std;

int main() {
    string name;
    cin >> name;

    char prev = ' ';

    for (int i = 0; i < name.size(); i++) {
        if (name.at(i) != prev) {
            prev = name.at(i);
            cout << prev;
        }
    }

    cout << endl;
}