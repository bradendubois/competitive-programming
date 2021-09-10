#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<char>> lot;

    while (R--) {
        vector<char> row;
        char c;
        int temp = C;
        while (temp--) {
            cin >> c;
            row.push_back(c);
        }
        lot.push_back(row);
    }

    map<int, int> costs;
    for (int row = 0; row < lot.size() - 1; row++) {
        for (int col = 0; col < C - 1; col++) {
            if (lot[row][col] == '#' || 
                lot[row][col+1] == '#' || 
                lot[row+1][col] == '#' || 
                lot[row+1][col+1] == '#') continue;

            int total = 0;
            if (lot[row][col] == 'X') total++;
            if (lot[row][col+1] == 'X') total++;
            if (lot[row+1][col] == 'X') total++;
            if (lot[row+1][col+1] == 'X') total++;
            costs[total]++;
        }
    }

    for (int i = 0; i <= 4; i++) cout << costs[i] << endl;
}