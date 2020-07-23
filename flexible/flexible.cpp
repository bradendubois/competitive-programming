#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    set<int> l, seen;
    
    int W, P, L;
    cin >> W >> P;
    
    seen.insert(W);
    
    while (P--) {

        cin >> L;
        seen.insert(L);
        seen.insert(W - L);

        for (auto other : l)
            seen.insert(L-other);

        l.insert(L);
    }

    vector<int> partitions;
    for (auto v : seen) partitions.push_back(v);
    sort(partitions.begin(), partitions.end());
    
    for (auto v : partitions) {
        cout << v << " ";
    } cout << endl;

}