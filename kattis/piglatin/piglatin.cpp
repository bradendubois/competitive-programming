#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool vowel(char c) {
    for (auto v : {'a', 'e', 'i', 'o', 'u', 'y'}) {
        if (c == v) return true;
    } return false;
}

int main() {
    string line;
    while (getline(cin, line)) {
        stringstream conv(line);
        string word;
        while (conv >> word) {
            // Vowel start!
            if (vowel(word.at(0))) {
                cout << word + "yay";
            } else {
                // Consonsant start!
                vector<char> queue;

                // Enqueue all the letters until we find a vowel!
                bool vowel_find = false;
                for (auto c : word) {
                    if (vowel(c)) vowel_find = true;
                    if (!vowel_find) queue.push_back(c);
                    else cout << c;
                }

                // Output all those queued consonants!
                for (auto con : queue) cout << con;
                cout << "ay";
            } cout << " ";
        } cout << endl;
    } 
}