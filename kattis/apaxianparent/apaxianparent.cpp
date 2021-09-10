#include <iostream>

using namespace std;

bool vowel(char v) {
    string vowels = "aiou";
    for (auto c: vowels) {
        if (c == v) return true;
    }
    return false;
}

int main() {
    string Y, P;
    cin >> Y >> P;

    if (Y.at(Y.size() - 1) == 'e') 
        cout << Y + "x" + P << endl;
    else if (vowel(Y.at(Y.size()-1))) 
        cout << Y.substr(0, Y.size() - 1) + "ex" + P << endl;
    else if (Y.at(Y.size()-2) == 'e' && Y.at(Y.size()-1) == 'x')
        cout << Y + P<< endl;
    else
        cout << Y + "ex" + P << endl;
}