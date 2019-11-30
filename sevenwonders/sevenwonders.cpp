#include <iostream>
#include <math.h>

using namespace std;

int main() {
    string line;
    cin >> line;

    int T = 0, C = 0, G = 0;

    for (int i = 0; i < line.size(); i++) {
        char cur = line.at(i);

        if (cur == 'T') T++;
        if (cur == 'C') C++;
        if (cur == 'G') G++;
    }

    int minx = min(T, min(C, G));
    int total = (T * T) + (C * C) + (G * G) + (minx * 7);
    cout << total << endl; 
}