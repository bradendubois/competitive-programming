#include <iostream>
#include <math.h>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> digits;
    while (N > 0) {
        if (N % 2 == 0) { 
            if (digits.size() > 0) digits.push(0);
        } else digits.push(1);
        N /= 2;
    }

    int total = 0, position = 0;
    while (digits.size() > 0) {
        if (digits.top()) total += pow(2, position);
        position++;
        digits.pop();

    }
    
    cout << total << endl;
}