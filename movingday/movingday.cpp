#include <iostream>

using namespace std;

int main() {
    long n, V, l, w, h, temp, current = 0;
    cin >> n >> V;
    while (n--) {
        cin >> l >> w >> h;
        temp = l * w * h;
        if (temp > current) current = temp;
    }

    cout << current - V << endl;
}
