#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string x;
    cin >> x;

    if (x.find("ss") != string::npos) cout << "hiss" << endl;
    else cout << "no hiss" << endl;

    return 0;
}