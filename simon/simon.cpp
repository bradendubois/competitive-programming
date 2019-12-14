#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    string line, simon = "simon says ";
    getline(cin, line); // Ignore first getline read
    while (T--) {
        getline(cin, line);
        if (line.find(simon) != string::npos) 
            cout << line.substr(simon.size()) << endl;
        else 
            cout << endl; 
    }
}