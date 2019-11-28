#include <iostream>

using namespace std;

int main() {

    int contestant = 0, max_val = 0;

    for (int i = 1; i <= 5; i++) {
    
        int total = 0;
        int x = 4;
        
        while (x--) {
            int grade;
            cin >> grade;
            total += grade;
        }

        if (total > max_val) {
            max_val = total;
            contestant = i;
        }
    }

    cout << contestant << " " << max_val << endl;
}