#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double soylent = 400;
    int T;
    double N;
    cin >> T;

    while (T--) {
        cin >> N;
        cout << ceil(N / soylent) << endl;
    }
}