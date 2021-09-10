#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if (a.size() < b.size()) cout << "no" << endl;
    else cout << "go" << endl;
}