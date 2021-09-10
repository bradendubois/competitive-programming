#include <iostream>

using namespace std;

int main() {
    bool missed = false;
    int n, i;
    cin >> n;

    int ex = 1;
    while (n--) {
        cin >> i;
        if (i != ex) {
            missed = true;
            while (ex != i) {
                cout << ex << endl;
                ex++;
            }
        } ex = i + 1;
    }

    if (!missed) cout << "good job" << endl; 
}