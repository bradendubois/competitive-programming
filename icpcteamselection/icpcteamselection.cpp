#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int C, N, in, total;
    cin >> C;

    while (C--) {
        cin >> N;
        N *= 3;
        vector<int> students;

        while (N--) {
            cin >> in;
            students.push_back(in);
        }

        sort(students.begin(), students.end());
        
        total = 0;
        for (int i = students.size()/3; i < students.size(); i += 2) {
            total += students[i];
        } cout << total << endl;
    }
}