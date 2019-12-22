#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num [3];
    int in;
    for (int i = 0; i < 3; i++) {
        cin >> in;
        num[i] = in;
    }

    sort(num, num+3);

    string order;
    cin >> order;
    for (auto c : order) {
        if (c == 'A') cout << num[0] << " ";
        else if (c == 'B') cout << num[1] << " ";
        else if (c == 'C') cout << num[2] << " ";
    } cout << endl;
}