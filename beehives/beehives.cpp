#include <iostream>
#include <vector>
#include <math.h>
#include <map>

using namespace std;

typedef pair<double, double> dd;

int main() {
    double d;
    int N;

    while (cin >> d >> N && N > 0) {
        vector<dd> hives;
        while (N--) {
            double x, y;
            cin >> x >> y;
            dd hive;
            hive.first = x;
            hive.second = y;
            hives.push_back(hive);
        }

        map<dd, bool> sour_hives;
        for (auto v : hives) {
            for (auto w : hives) {
                if (v != w) {
                    double hyp = hypot(abs(v.first - w.first), abs(v.second - w.second));
                    if (hyp <= d) {
                        sour_hives[v] = true;
                        sour_hives[w] = true;
                    }
                }
            }
        }

        int sour = 0;
        for (auto hive : hives) 
            if (sour_hives[hive]) sour++;
        cout << sour << " sour, " << hives.size() - sour << " sweet" << endl;
    }
}