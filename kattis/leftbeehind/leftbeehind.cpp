#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        stringstream conv(line);
        int x, y;
        conv >> x >> y;
        if (x + y == 0) return 0;

        if (x + y == 13) cout << "Never speak again." << endl;
        else if (x == y) cout << "Undecided." << endl;
        else if (x > y) cout << "To the convention." << endl;
        else cout << "Left beehind." << endl;
    }
}