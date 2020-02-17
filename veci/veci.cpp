#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    char X [7];
    cin >> X;

    int X_int = stoi(X), max = INT32_MAX;

    do {
        int cur;
        sscanf(X, "%d", &cur);
        if (cur > X_int && cur < max) max = cur;
    } while (std::next_permutation(X, X+7));

    cout << (max < INT32_MAX ? max : 0) << endl;
}