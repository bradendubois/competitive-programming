#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main() {

    string in;
    cin >> in;

    string left = in.substr(0, in.length() / 2);
    string right = in.substr(in.length() / 2);

    vector<int> left_values;
    vector<int> right_values;

    int left_sum = 0, right_sum = 0;
    for (auto c : left) {
        left_sum += c % 'A';
        left_values.push_back(c - 'A');

    }

    for (auto c : right) {
        right_sum += c % 'A';
        right_values.push_back(c - 'A');
    }

    for (int i = 0; i < in.length() / 2; i++) {

        left_values[i] += left_sum;
        right_values[i] += right_sum;

        left_values[i] %= 26;
        right_values[i] %= 26;

        left_values[i] += right_values[i];
        left_values[i] %= 26;

        left[i] = 'A' + left_values[i];
    }

    cout << left << endl;
}