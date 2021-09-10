#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N;
    string s;
    cin >> N >> s;

    string adrian_s = "ABC", bruno_s = "BABC", goran_s = "CCAABB";
    int adrian = 0, bruno = 0, goran = 0;
    char cur;
    for (int i = 0; i < N; i++) {
        cur = s.at(i);

        if (cur == adrian_s.at(i % adrian_s.size())) adrian++;
        if (cur == bruno_s.at(i % bruno_s.size())) bruno++;
        if (cur == goran_s.at(i % goran_s.size())) goran++;
    }

    int best = max(adrian, max(bruno, goran));

    cout << best << endl;
    if (adrian == best) cout << "Adrian" << endl;
    if (bruno == best) cout << "Bruno" << endl;
    if (goran == best) cout << "Goran" << endl;
}