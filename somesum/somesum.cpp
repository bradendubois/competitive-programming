#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 2 != 0) {
        cout << "Either" << endl;
    } else if (N == 4 || N == 8) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}