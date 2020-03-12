#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long N, b;
    cin >> N >> b;
    cout << (N <= pow(2, b+1) - 1 ? "yes" : "no") << endl;
}