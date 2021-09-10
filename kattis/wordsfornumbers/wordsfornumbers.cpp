#include <iostream>
#include <string.h>
#include <map>
#include <sstream>

using namespace std;

bool digits(string word) {
    for (auto c : word) 
    if (!isdigit(c)) 
        return false;
    return true;
}

string lookup(int x) {

    if (x == 0) return "zero";
    if (x == 10) return "ten";

    string first, second;
    int t = x / 10, o = x % 10;

    if (t == 2) first = "twenty";
    if (t == 3) first = "thirty";
    if (t == 4) first = "forty";
    if (t == 5) first = "fifty";
    if (t == 6) first = "sixty";
    if (t == 7) first = "seventy";
    if (t == 8) first = "eighty";
    if (t == 9) first = "ninety";

    if (o == 1) second = "one";
    if (o == 2) second = "two";
    if (o == 3) second = "three";
    if (o == 4) second = "four";
    if (o == 5) second = "five";
    if (o == 6) second = "six";
    if (o == 7) second = "seven";
    if (o == 8) second = "eight";
    if (o == 9) second = "nine";

    if (o == 0) return first;
    if (t == 0) return second;
    if (t >= 2) return first + "-" + second;

    if (x == 10) return "ten";
    if (x == 11) return "eleven";
    if (x == 12) return "twelve";
    if (x == 13) return "thirteen";
    if (x == 14) return "fourteen";
    if (x == 15) return "fifteen";
    if (x == 16) return "sixteen";
    if (x == 17) return "seventeen";
    if (x == 18) return "eighteen";
    if (x == 19) return "nineteen";

    return "";
}

int main() {
    string line;
    while (getline(cin, line)) {
        stringstream conv(line);
        while (conv.good()) {
            string word;
            conv >> word;

            if (digits(word))
                cout << lookup(stoi(word));
            else
                cout << word;
            cout << " ";
        } cout << endl;
    }
}