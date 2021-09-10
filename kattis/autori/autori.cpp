#include <iostream>

using namespace std;

int main() {
    string line;
    cin >> line;
    for (auto c : line) {
        if (isupper(c)) cout << c;
    } cout << endl;
}
