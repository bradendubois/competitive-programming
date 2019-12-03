#include <iostream>
#include <map>

using namespace std;

int main() {
    int n = 10, unique = 0, x;
    map<int, int> counts;

    while (n--) {
        cin >> x;
        x %= 42;
        if (counts[x] == 0) unique++;
        counts[x]++;
    }

    cout << unique << endl;
}