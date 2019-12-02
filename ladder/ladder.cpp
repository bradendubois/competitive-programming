#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int h, v;
    cin >> h >> v;
    cout << ceil(h / sin((M_PI / 180) * v)) << endl;
}