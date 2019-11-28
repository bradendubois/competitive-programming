#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << x; 

        if (x % 2 == 0)
            cout << " is even";
        else
            cout << " is odd";

        cout << endl;
    }
}