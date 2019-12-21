#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector<string> alpha{"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","_",",",".","?"};
    vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","..--",".-.-","---.","----"};

    map<string, string> to_alpha;
    map<string, string> to_morse;

    for (int i = 0; i < alpha.size(); i++) {
        to_alpha[morse[i]] = alpha[i];
        to_morse[alpha[i]] = morse[i];
    }

    string line;
    while(getline(cin, line)) {
        vector<int> sizes;
        string convert = "";

        for (int i = 0; i < line.size(); i++) {
            string m = to_morse[line.substr(i, 1)];
            sizes.push_back(m.size());
            convert += m;
        }

        while (sizes.size() > 0) {
            int next = sizes.back();
            sizes.pop_back();

            string l = convert.substr(0, next);
            convert = convert.substr(next);
            cout << to_alpha[l];
        } cout << endl;
    }
}