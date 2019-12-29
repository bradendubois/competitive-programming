#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int g, in, expect, id = 1;
        cin >> g;

        cin >> in;
        expect = in + 1;
        g--;

        bool found = false;

        while (g--) {
            id++;
            cin >> in;

            if (in != expect && !found) {
                cout << id << endl;
                found = true;
            } expect++;
        }
    }
}