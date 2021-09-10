#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pieces;

    while (n--) {
        int in;
        cin >> in;
        pieces.push_back(in);
    }

    sort(pieces.begin(), pieces.end());
    
    int alice = 0, bob = 0;
    bool alice_turn = true;
    for (int i = pieces.size()-1; i >= 0; i--) {
        if (alice_turn) {
            alice += pieces[i];
        } else {
            bob += pieces[i];
        } alice_turn = !alice_turn;
    } cout << alice << " " << bob << endl;
}