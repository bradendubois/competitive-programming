#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << max(C-B, B-A) - 1 << endl;
}