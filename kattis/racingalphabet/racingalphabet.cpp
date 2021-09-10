#include <iostream>
#include <iomanip>
#include <map>
#include <math.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ '";
    map<char, int> aphorism;
    for (int i = 0; i < a.size(); i++) {
        aphorism[a.at(i)] = i;
    }

    string in;
    getline(cin, in);    
    while (N--) {
        getline(cin, in);
        double cost = 0;
        int distance;
        char curPos = in.at(0);
        for (char c: in) {
            distance = abs(aphorism[curPos] - aphorism[c]);
            if (distance > a.size() / 2) distance = a.size() - distance;
            cost += distance;
            curPos = c;
        }

        cost *= (60 * M_PI) / 28;
        cout << fixed << setprecision(10);
        cout << (cost / 15) + in.size() << endl;
    }
}