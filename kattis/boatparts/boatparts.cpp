#include <iostream>
#include <map>

using namespace std;

int main() {
    int P, N;
    cin >> P >> N;
    int unique = 0;
    map <string, int> replaced;

    string part;
    for (int i = 1; i <= N; i++) {
        cin >> part;
        if (replaced[part] == 0) {
            replaced[part]++;
            unique++;
        }

        if (unique == P) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "paradox avoided" << endl;
}