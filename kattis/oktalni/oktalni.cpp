#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    string in;
    cin >> in;

    reverse(in.begin(), in.end());

    while (in.size() % 3 != 0) in.push_back('0');

    while (in.size()) {
        int total = 0;
        int power = 3;
        while (power--) {
            char val = in.back();
            if (val == '1')
                total += pow(2, power);
            in.pop_back();
        } cout << total;
    } cout << endl;
}