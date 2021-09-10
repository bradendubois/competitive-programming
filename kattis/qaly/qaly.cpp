#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    double total = 0;
    double q, y;
        
    for (int i = 0; i < N; i++) {
        cin >> q >> y;
        total += q * y;
    }

    cout << total << endl;
    return 0;
}