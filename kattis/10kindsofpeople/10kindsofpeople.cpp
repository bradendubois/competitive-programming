#include <iostream>
#include <map>
#include <vector>

using namespace std;

void recurseMark(int y, int x, vector<vector<char>> & b_map, 
        map<int, map<int, int>> & groups, int group, int type) {
    
    if (!groups[y][x] && b_map[y][x] == type) {
        groups[y][x] = group;
        if (y-1 >= 0) recurseMark(y-1, x, b_map, groups, group, type);
        if (y+1 < b_map.size()) recurseMark(y+1, x, b_map, groups, group, type);
        if (x-1 >= 0) recurseMark(y, x-1, b_map, groups, group, type);
        if (x+1 < b_map[y].size()) recurseMark(y, x+1, b_map, groups, group, type);
    } 
}

int main() {

    int r, c, temp_r, temp_c, r1, c1, r2, c2, queries, group = 1;
    char in;
    cin >> r >> c;

    vector<vector<char>> binary_map;
    map<int, map<int, int>> groups;

    temp_r = r;
    while (temp_r--) {
        
        vector<char> row;
        
        temp_c = c;
        while (temp_c--) {
            cin >> in;
            row.push_back(in);
        } binary_map.push_back(row);
    }

    for (int row = 0; row < binary_map.size(); row++) {
        for (int col = 0; col < binary_map[row].size(); col++) {
            if (!groups[row][col]) {
                recurseMark(row, col, binary_map, groups, group++, (binary_map[row][col] == '1' ? '1' : '0'));
            }
        }
    }

    cin >> queries;
    while (queries--) {
        cin >> r1 >> c1 >> r2 >> c2;
        r1--; c1--; r2--; c2--;
        if (groups[r1][c1] == groups[r2][c2]) {
            if (binary_map[r1][c1] == '1') cout << "decimal" << endl;
            else cout << "binary" << endl;
        } else cout << "neither" << endl;
    }
    

}