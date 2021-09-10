#include <iostream> 

using namespace std;

int sumOfDigits(int x) {
    if (x == 0) return 0; 
    return x % 10 + sumOfDigits(x / 10);
}

int main() {
    int n;
    cin >> n;

    while (n % sumOfDigits(n) != 0) n++;
    cout << n << endl;
}