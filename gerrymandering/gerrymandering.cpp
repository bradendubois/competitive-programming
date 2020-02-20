#include <iostream>
#include <map>

using namespace std;

int main() {
    int P, D, d, a, b;
    cin >> P >> D;
    
    map<int, pair<int, int>> districts;

    while (P--) {
        cin >> d >> a >> b;
        districts[d].first += a;
        districts[d].second += b;
    }

    int V = 0, total_wa = 0, total_wb = 0, wa = 0, wb = 0;
    for (int i = 1; i <= D; i++) {
        pair<int, int> district = districts[i];

        // A wins
        if (district.first > district.second) {
            wa = district.first - ((district.first + district.second) / 2 + 1);
            wb = district.second;
            cout << "A " << wa << " " << wb << endl;
        // B wins
        } else { 
            wa = district.first;
            wb = district.second - ((district.first + district.second) / 2 + 1);
            cout << "B " << wa << " " << wb << endl;
        }

        total_wa += wa;
        total_wb += wb;
        V += district.first + district.second;
    }

    cout << ((double) abs(total_wa - total_wb)) / (double) V << endl;
}