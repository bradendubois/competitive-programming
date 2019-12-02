#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string n;
        cin >> n;

        vector<int> number;
        for (int i = 0; i < n.size(); i++) {
            number.push_back(n.at(i) - '0');
        }
        
        for (int i = number.size(); i >= 0; i-= 2) {
            int x = number[i];
            x *= 2;

            while (x >= 10) {
                int o = x % 10;
                x /= 10;
                x += o;
            }

            number[i] = x;
        }

        int total = 0;
        for (int i = 0; i < number.size(); i++) {
            total += number[i];
        }

        
        if (total % 10 == 0) cout << "PASS" << endl;
        else cout << "FAIL" << endl;
    }
}