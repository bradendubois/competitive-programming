#include <iostream>

using namespace std;

int main() {
    int counts[]{0, 0, 0, 0, 0, 0}, n, in;
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> in;
        if (!counts[in-1])
            counts[in-1] = i;
        else
            counts[in-1] = -1;
    }

    for (int i = 5; i >= 0; i--) {
        if (counts[i] > 0) {
            cout << counts[i] << endl;
            return 0;
        }
    } cout << "none" << endl;
}