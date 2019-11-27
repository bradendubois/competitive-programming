#include <iostream>
#include <vector>

using namespace std;

bool valid(vector<char> & line) {

    int black = 0;
    int white = 0;

    for (int i = 0; i < line.size(); i++) {
        if (line[i] == 'W') white++;
        else black++;

        if (i >= 1 && i <= line.size()-1) {
            if (line[i] == line[i-1] && line[i] == line[i+1])
                return false;
        }
    }

    if (black == white) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;

    vector<vector<char>> rows(n, vector<char>());
    vector<vector<char>> cols(n, vector<char>());

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
    
        for (int j = 0; j < line.size(); j++) {
            rows[i].push_back(line.at(j));
            cols[j].push_back(line.at(j));
        }
    }

    for (auto row : rows) {
        if (!valid(row)) {
            cout << 0 << endl;
            return 0;
        }
    }

    for (auto col : cols) {
        if (!valid(col)) {
            cout << 0 << endl;
            return 0;
        }
    } 

    cout << 1 << endl;
}