#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        cout << "0.";
       while (c--) {
            if (a < b) a *= 10;
            cout << a / b;
            a %= b;
        } cout << endl;
    }
}