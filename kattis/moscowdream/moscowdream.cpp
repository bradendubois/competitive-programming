#include <iostream>

using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << (a && b && c && a + b + c >= n && n >= 3 ? "YES" : "NO") << endl;
}