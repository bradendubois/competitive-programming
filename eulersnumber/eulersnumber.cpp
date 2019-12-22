#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(12);

    long double approx = 0.0;
    long double fact = 1.0;
    int i = 1;

    while (i <= n+1) {
        approx += 1 / fact;
        fact *= i;
        i++;
    } cout << approx << endl;
}