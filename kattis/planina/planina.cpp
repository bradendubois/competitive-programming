#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int points = 2;

    for (int i = 0; i < N; i++) {
        points += points-1;
    }

    cout << points * points << endl;
    return 0;
}