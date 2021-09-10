#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int N, M;
    cin >> N >> M;

    string line;
    vector<int> blanksInColumn(M);
    
    for (int row = 0; row < N; row++) {
        cin >> line;
        for (int col = 0; col < M; col++) {
            if (line[col] == '_') {
                blanksInColumn[col]++;
            }
        }
    }

    int totalBlankColumns = 0;
    for (auto blanksCount : blanksInColumn) {
        if (blanksCount == N) totalBlankColumns++;
    }

    cout << totalBlankColumns + 1 << endl;

}
