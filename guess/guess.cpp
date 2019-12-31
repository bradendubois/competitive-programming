#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int guesses = 10;

    int lower = 1, upper = 1000;

    while (guesses) {
        cout << (upper + lower) / 2 << endl;

        string in;
        cin >> in;

        if (strcmp(in.c_str(), "correct") == 0) 
            return 0;
        else if (strcmp(in.c_str(), "lower") == 0) 
            upper = ((upper + lower) / 2) - 1; 
        else if (strcmp(in.c_str(), "higher") == 0) 
            lower = ((upper + lower) / 2) + 1;
    }
}