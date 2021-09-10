#include <iostream>

using namespace std;

int main() {
    int K, a = 1, b = 0, temp;
    cin >> K;

    while (K--) {
        temp = a;
        a = b;
        b += temp;
    }

    cout << a << " " << b << endl;
}