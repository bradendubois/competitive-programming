#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    string simon = "Simon says";

    string command; 
    getline(cin, command); // Ignore first line read
    while (N--) {
        command;
        getline(cin, command);
        
        if (command.find(simon) != string::npos) {
            cout << command.substr(simon.size()) << endl;
        }
    }
}