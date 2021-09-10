#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int C;
    cin >> C;

    string in;
    int root;

    while (C--) {
        cin >> in;
        root = sqrt(in.size());

        for (int i = root-1; i >= 0; i--) {
            
            for (int j = 0; j < root; j++) {
                cout << in.at(((j * root) + i));
            }
        } cout << endl;
    }
}