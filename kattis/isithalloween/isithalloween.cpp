#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string month, date;
    cin >> month >> date;

    if (strcmp(month.c_str(), "OCT") == 0 && strcmp(date.c_str(), "31") == 0) {
        cout << "yup" << endl;
    } else if (strcmp(month.c_str(), "DEC") == 0 && strcmp(date.c_str(), "25") == 0) {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }

    return 0;
}