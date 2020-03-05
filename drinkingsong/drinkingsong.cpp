#include <iostream>

using namespace std;

int main() {
    int N;
    string beverage;
    cin >> N >> beverage;

    while (N) {
        // First line
        cout << N << " bottle" << (N == 1 ? "" : "s") << " of " + beverage + " on the wall, " << N << " bottle" << (N == 1 ? "" : "s") << " of " + beverage + "." << endl;
        
        // Second line - first half
        cout << "Take " << (N == 1 ? "it" : "one") << " down, pass it around, ";
        
        // Decrement N
        if (--N) 
            // N > 0
            cout << N << " bottle" << (N == 1 ? "" : "s") << " of " + beverage + " on the wall.";
        else 
            // N = 0
            cout << "no more bottles of " + beverage + "." << endl;
        
        // N > 0, empty line between verses
        if (N) cout << endl;
    }
}