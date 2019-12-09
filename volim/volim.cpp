#include <iostream>

using namespace std;

int main() {
    int K, N;
    cin >> K >> N;
    K--;

    int time = 0;

    while (N--) {
        int t;
        char a;
        cin >> t >> a;
        
        time += t;
        if (time >= 210) {
            break;
        }

        if (a == 'T') {
            K = (K + 1) % 8;
        }
    }

    cout << K+1 << endl;
}