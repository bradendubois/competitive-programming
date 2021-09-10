#include <iostream>

using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    M -= 45;
    
    if (M < 0) {
        M += 60;
        H -= 1;
    }

    if (H < 0) 
        H += 24;

    cout << H << " " << M << endl;
}