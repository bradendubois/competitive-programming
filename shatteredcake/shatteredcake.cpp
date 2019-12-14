#include <iostream>

using namespace std;

int main() {
    int W, N, area = 0;
    cin >> W >> N;
    while (N--) {
        int w, L;
        cin >> w >> L;
        area += w * L;
    }
    cout << area / W << endl;
}