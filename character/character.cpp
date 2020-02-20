#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    cout << (1 << N) - 1 - N << endl;
}