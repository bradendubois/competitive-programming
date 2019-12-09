#include <iostream>

using namespace std;

int main() {
    int G, S, C;
    cin >> G >> S >> C;
    
    int wealth = (G * 3) + (S * 2) + C;

    if (wealth >= 8) 
        cout << "Province or ";
    else if (wealth >= 5)
        cout << "Duchy or ";
    else if (wealth >= 2)
        cout << "Estate or ";
    
    if (wealth >= 6)
        cout << "Gold" << endl;
    else if (wealth >= 3)
        cout << "Silver" << endl;
    else
        cout << "Copper" << endl;
}