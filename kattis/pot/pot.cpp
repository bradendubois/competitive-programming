#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int pre;
    int x, y;

    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> pre;
        x = pre / 10;
        y = pre % 10;

        total += pow(x, y);
    }

    cout << total << endl;
    return 0;
}