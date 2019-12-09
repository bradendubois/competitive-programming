#include <iostream>

using namespace std;

bool vowel(char c) {
    char vowels [] = {'a', 'e', 'i', 'o', 'u'};
    for (auto vowel : vowels) {
        if (vowel == c) return true;
    } return false;
}

int main() {
    string line;
    getline(cin, line);
    int cursor = 0;
    while (cursor < line.size()) {
        cout << line.at(cursor);
        if (vowel(line.at(cursor))) {
            cursor += 2;
        }
        cursor++;
    } cout << endl;
}