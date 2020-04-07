#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string in;
    
    int n, total = 0;
    cin >> n;

    while (n--) {
        cin >> in;
        if (in.find("CD") == string::npos)
            total++;
    } cout << total << endl;
}
