#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    int display = 0, wait = 0;
    while (N--) {
        int M, S;
        cin >> M >> S;

        display += 60 * M;
        wait += S;
    }
    cout << fixed << setprecision(10);
    if (wait > display) cout << (double) wait / (double) display << endl;
    else cout << "measurement error" << endl;
}