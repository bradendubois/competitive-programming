#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int in, x = 4;
    vector<int> numbers;
    while (x--) {
        cin >> in;
        numbers.push_back(in);
    }

    sort(numbers.begin(), numbers.end());
    cout << numbers[0] * numbers[2] << endl;
}