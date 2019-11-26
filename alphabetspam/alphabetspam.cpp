#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string message;
    cin >> message;

    cout << fixed << setprecision(16);

    double whitespace = 0, lower = 0, upper = 0, symbol = 0;

    for (int i = 0; i < message.size(); i++) {
        char cur = message.at(i);

        if (cur == '_') whitespace++;
        else if (islower(cur)) lower++;
        else if (isupper(cur)) upper++;
        else symbol++;
    }

    double total = (double) message.size();
    
    cout << whitespace / total << endl;
    cout << lower / total << endl;
    cout << upper / total << endl;
    cout << symbol / total << endl; 
}