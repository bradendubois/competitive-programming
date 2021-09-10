#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int main() {
    int N;
    cin >> N;

    string line;
    string left;
    string right;

    int plus;

    for (int i = 0; i < N; i++) {
        cin >> line;

        if (strcmp(line.c_str(), "P=NP") == 0) {
            cout << "skipped" << endl;
            continue;
        }

        plus = line.find("+");

        stringstream conv_left(line.substr(0, plus));
        stringstream conv_right(line.substr(plus+1));
        
        int left_int; 
        conv_left >> left_int;

        int right_int;
        conv_right >> right_int;

        cout << left_int + right_int << endl;
        
    }
}