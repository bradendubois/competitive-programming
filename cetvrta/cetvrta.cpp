#include <iostream>

using namespace std;

int one_occur(int a, int b, int c) {
    if (a == b) return c;
    if (a == c) return b;
    else return a;
    return 0;
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << one_occur(x1, x2, x3) << " " << one_occur(y1, y2, y3) << endl;
}