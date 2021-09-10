#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> lines;
    int R, C, Zr, Zc;
    cin >> R >> C >> Zr >> Zc;

    while (R--) {
        string line;
        cin >> line;
        lines.push_back(line);
    }

    for (auto line : lines) {
        for (int row = 0; row < Zr; row++) {
            for (int i = 0; i < line.size(); i++) {
                char cur = line.at(i);
                for (int col = 0; col < Zc; col++) {
                    cout << cur;
                } 
            } cout << endl;
        }
    }
}