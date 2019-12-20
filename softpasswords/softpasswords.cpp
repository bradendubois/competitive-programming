#include <iostream>
#include <string.h>

using namespace std;

bool switchCase(string S, string P) {
    for (int i = 0; i < S.size(); i++) {
        if (isalpha(P.at(i))) {
            if (islower(P.at(i))) {
                if (!S.at(i) == toupper(P.at(i))) return false;
            } else {
                if (!S.at(i) == tolower(P.at(i))) return false;
            }
        }
    }
    return true;
}

int main() {
    string S, P;
    cin >> S >> P;

    if (strcmp(S.c_str(), P.c_str()) == 0 || 
        (isdigit(P.at(0)) && strcmp(S.c_str(), P.substr(1).c_str())) ||
        (isdigit(P.at(P.size()-1)) && strcmp(S.c_str(), P.substr(0, P.size()-2).c_str())) ||
        (switchCase(S, P))) 
            cout << "Yes" << endl;
    else cout << "No" << endl;
}