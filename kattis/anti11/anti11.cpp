#include <iostream>
#include <map>

using namespace std;

map<int, long> fib_map;

long fib(int n) {
    if (n == 0 || n == 1) return n;
    if (!fib_map[n]) {
        fib_map[n] = (fib(n-1) + fib(n-2)) % 1000000007;
    } return fib_map[n] % 1000000007;    
}

int main() {

    int T;
    cin >> T;

    while (T--) {

        int n;
        cin >> n;

        cout << fib(n+2) % 1000000007 << endl;
    }
}