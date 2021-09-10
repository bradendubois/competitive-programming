#include <iostream>
#include <string.h>

using namespace std;

int main() {

    string S, P;
    cin >> S >> P;

    if (strcmp(S.c_str(), P.c_str()) == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    string temp;
    for (int i = 0; i <= 9; i++) {
        string digit(1, i + '0');
        
        temp = digit + P;
        if (strcmp(S.c_str(), temp.c_str()) == 0) {
            cout << "Yes" << endl;
            return 0;
        }

        temp = P + digit;
        if (strcmp(S.c_str(), temp.c_str()) == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    temp = "";
    for (int i = 0; i < P.size(); i++) {
        if (isalpha(P.at(i))) {
            if (isupper(P.at(i))) {
                temp += tolower(P.at(i));
            } else {
                temp += toupper(P.at(i));
            }
        } else temp += P.at(i);
    } 

    if (strcmp(S.c_str(), temp.c_str()) == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}