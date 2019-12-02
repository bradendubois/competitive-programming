#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int L, x;
    cin >> L >> x;

    int denials = 0;
    int current = 0;

    for (int i = 0; i < x; i++) {
        string movement;
        int amount;

        cin >> movement >> amount;

        if (strcmp(movement.c_str(), "enter") == 0) {
            if (amount > L - current) denials++;
            else current += amount;
        } else current -= amount;
    }

    cout << denials << endl;

    return 0;
}