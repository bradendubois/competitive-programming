#include <iostream>
#include <stack>
#include <map>

using namespace std;

int main() {

    map<char, char> pair{
        {'{', '}'},
        {'(', ')'},
        {'[', ']'}
    };

    stack<char> s;
    
    string line;
    getline(cin, line);

    int L = stoi(line);
    getline(cin, line);

    for (int c = 0; c < L; c++) {

        if (line[c] == ' ') {
            continue;
        } else if (pair[line[c]] ) {
            s.push(line[c]);
        } else if (s.empty() || pair[s.top()] != line[c]) {
            cout << line[c] << " " << c << endl;
            return 0;
        } else {
            s.pop();
        }

    }
    
    cout << "ok so far" << endl;
}