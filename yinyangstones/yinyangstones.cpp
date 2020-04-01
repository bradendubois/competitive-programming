#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    cin >> s;

    int w = 0, b = 0;

    for (auto stone : s)
        (stone == 'W' ? w++ : b++);
        
    cout << (w == b ? 1 : 0) << endl;
}
