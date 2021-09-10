#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N, W, H;
    cin >> N >> W >> H;

    int hyp = sqrt(pow(W, 2) + pow(H, 2));

    for (int i = 0; i < N; i++) {
        int match;
        cin >> match;

        if (match <= hyp) cout << "DA" << endl;
        else cout << "NE" << endl;
    }

    return 0;
}