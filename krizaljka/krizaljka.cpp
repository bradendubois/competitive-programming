#include <iostream>
#include <vector>

using namespace std;

int main() {

    string A, B;
    cin >> A >> B;

    vector<vector<char>> rows(B.size(), vector<char>(A.size(), '.'));

    int b_col, a_row;
    for (int i = 0; i < A.size(); i++) {
        if (B.find(A.substr(i, 1)) != string::npos) {
            b_col = i, a_row = B.find(A.substr(i, 1));
            break;
        }
    }

    for (int col = 0; col < A.size(); col++)
        rows[a_row][col] = A[col];

    for (int row = 0; row < B.size(); row++)
        rows[row][b_col] = B[row];

    for (auto row : rows) {
        for (auto col : row) {
            cout << col;
        } cout << endl;
    }
}
