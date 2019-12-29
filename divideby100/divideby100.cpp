#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    string N, M;
    cin >> N >> M;

    while (N.back() == '0' && M.back() == '0') {
        N.pop_back();
        M.pop_back();
    }

    if (strcmp(M.c_str(), "1") == 0) {
        cout << N << endl;
        return 0;
    }
    
    if (M.size() <= N.size()) {
        int over = M.size() - 1;
        for (int i = 0; i < (N.size() - over); i++) {
            cout << N.at(i);
        }
        cout << ".";
        for (int i = N.size() - over; i < N.size(); i++) {
            cout << N.at(i);
        } cout << endl;
    } else {
        while (N.back() == '0') N.pop_back();
        cout << "0.";
        int over = M.size() - N.size() - 1;
        while (over--) cout << '0';
        cout << N << endl;
    }
}