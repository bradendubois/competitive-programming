#include <iostream>

using namespace std;

int main() {
    
    int n, p, d, cur_w = 0, cur_z = 0, tired = 0;
    string pattern;
    
    cin >> n >> p >> d >> pattern;

    for (int i = 0; i < p; i++) {
        if (pattern.at(i) == 'W') cur_w++;
        else cur_z++;
    }

    if (cur_z < d) tired++;
    
    for (int i = 1; i < pattern.size(); i++) {
        char prev = pattern.at(i-1);
        char next = pattern.at((i+p-1) % pattern.size());

        if (prev == 'W') cur_w--;
        else cur_z--;

        if (next == 'W') cur_w++;
        else cur_z++;

        if (cur_z < d) tired++;
    }
    cout << tired << endl;
}