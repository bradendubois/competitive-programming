#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int first, second;
    cin >> first >> second;

    int rev_first = 0, rev_second = 0;
    
    int x = 3;
    while (x--) {
        rev_first = rev_first * 10 + (first % 10);
        first /= 10;

        rev_second = rev_second * 10 + (second % 10);
        second /= 10;
    }

    cout << max(rev_first, rev_second) << endl;
}