#include <iostream>

using namespace std;

int main() {
    int S;
    cin >> S;
    cout << S << ":" << endl;

    for (int i = 2; i <= (S/2) + 1; i++) {
        if (S % (i + (i-1)) == 0 || S % (i + (i-1)) == i) 
            cout << i << "," << i-1 << endl;
        if (S % i == 0) 
            cout << i << "," << i << endl;
    }
}