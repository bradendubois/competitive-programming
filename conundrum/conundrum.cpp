#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    int total = 0;

    for (int i = 0; i < word.size(); i++) {
        
        int r = i % 3;
        char per;
        if (r == 0) {
            per = 'p';
        } else if (r == 1) {
            per = 'e';
        } else {
            per = 'r';
        }
        
        if (tolower(word.at(i)) != per) {
            total += 1;
        }
    }

    cout << total << endl;
}