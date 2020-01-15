#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>

using namespace std;

int main() {
    
    double ae = 0, total = 0;

    string word;
    while (cin >> word) {
        total++;
        if (word.find("ae") != string::npos) ae++;
    }

    if (ae / total > 0.40L) cout << "dae ae ju traeligt va" << endl;
    else cout << "haer talar vi rikssvenska" << endl;
}