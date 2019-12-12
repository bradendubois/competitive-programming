#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, bool> inside;

    while (n--) {
        string movement, person;
        cin >> movement >> person;
        
        cout << person << " ";

        if (strcmp(movement.c_str(), "entry") == 0) {
            cout << "entered ";
            if (inside[person]) cout << "(ANOMALY)";
            inside[person] = true;
        } else {
            cout << "exited ";
            if (!inside[person]) cout << "(ANOMALY)";
            inside[person] = false;
        }

        cout << endl;
    }
}