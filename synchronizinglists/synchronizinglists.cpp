#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    while (cin >> n) {
        
        vector<int> unsorted_first;
        vector<int> sorted_first;
        vector<int> sorted_second;

        int m;
            
        for (int i = 0; i < n; i++) {
            cin >> m;
            unsorted_first.push_back(m);
            sorted_first.push_back(m);
        }

        for (int i = 0; i < n; i++) {
            cin >> m;
            sorted_second.push_back(m);
        }

        map<int, int> synchronize;
        sort(sorted_first.begin(), sorted_first.end());
        sort(sorted_second.begin(), sorted_second.end());

        for (int i = 0; i < n; i++) 
            synchronize[sorted_first[i]] = sorted_second[i];
        
        for (auto i : unsorted_first) cout << synchronize[i] << endl;
        cout << endl;
    }
}