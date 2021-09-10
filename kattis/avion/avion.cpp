#include <iostream>
#include <string>

using namespace std;

int main() {
    string in;
    int flight = 0;
    bool found = false;

    while (cin >> in) {
        flight++;
        if (in.find("FBI") != string::npos) {
            found = true;
            cout << flight << " ";
        }
    }

    if (!found) cout << "HE GOT AWAY!" << endl;
}