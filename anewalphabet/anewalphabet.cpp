#include <iostream>
#include <map>

using namespace std;

int main() {

    map<char, string> alphabet{
        {'a', "@"}, {'b', "8"}, {'c', "("}, {'d', "|)"}, {'e', "3"},
        {'f', "#"}, {'g', "6"}, {'h', "[-]"}, {'i', "|"}, {'j', "_|"},
        {'k', "|<"}, {'l', "1"}, {'m', "[]\\/[]"}, {'n', "[]\\[]"}, {'o', "0"},
        {'p', "|D"}, {'q', "(,)"}, {'r', "|Z"}, {'s', "$"}, {'t', "']['"},
        {'u', "|_|"}, {'v', "\\/"}, {'w', "\\/\\/"}, {'x', "}{"}, {'y', "`/"},
        {'z', "2"}
    };

    string in;
    getline(cin, in);

    for (auto & c : in) {
        c = tolower(c);
        if (alphabet[c] != "") {
            cout << alphabet[c];
        } else {
            cout << c;
        }
    } cout << endl;
}