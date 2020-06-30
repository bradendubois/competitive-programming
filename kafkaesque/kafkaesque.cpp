#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int K, current, previous = -1, passes = 1;
    cin >> K;

    while (K--) {
        cin >> current;
        if (current < previous) {
            passes++;
        } previous = current;
    }

    cout << passes << endl;
}