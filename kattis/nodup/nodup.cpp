#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<string, int> repeat;
    string in;

    while (cin >> in) {        
        repeat[in]++;
        if (repeat[in] > 1) {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
}