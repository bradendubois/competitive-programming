#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int highest_a = INT32_MIN;
    int lowest_b = INT32_MAX;

    int N;
    cin >> N;

    while (N--) {
        int a, b;
        cin >> a >> b;
        if (a > highest_a) highest_a = a;
        if (b < lowest_b) lowest_b = b;
    }

    if (lowest_b < highest_a) cout << "edward is right" << endl;
    else cout << "gunilla has a point" << endl;
}