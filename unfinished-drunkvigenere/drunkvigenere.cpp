#include <iostream>

using namespace std;

int main() {
    string C, K;
    cin >> C >> K;

    for (int i = 0; i < C.size(); i++) {
        
        char from = C[i], key = K[i], to;
        
        int f = from, k = key;
        cout << from << " " << f << " " << key << " " << k << " " << key % 65;
        
        if (key % 2 == 0) {
            to = from - (key % 65);        
        } else {
            to = from + (key % 65) ;
        }

        int t = to;
        cout << " " << t << endl;

        //cout << to;
        while (to > 'Z') to -= 26;
        while (to < 'A') to += 26;
        //cout << to;
    } cout << endl;
}