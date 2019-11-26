#include <iostream>

using namespace std;

int main() {
    int L, D, X, min = 0, max = 0;
    cin >> L >> D >> X;

    for (int i = L; i <= D; i++) {
        
        int temp = i;
        int total = 0;
        
        while (temp) {
            total += (temp % 10);
            temp /= 10;
        }

        if (total == X) {
            if (i < min || min == 0) min = i;
            if (i > max || max == 0) max = i;
        }
    }

    cout << min << endl;
    cout << max << endl;
}