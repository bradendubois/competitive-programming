#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n, m;
    while (cin >> n >> m) {
        
        if (n == 0 && m == 0)
            return 0;

        vector<int> heads(n), knights(m);
        for (auto & head : heads)
            cin >> head;
        for (auto & knight : knights)
            cin >> knight;
        
        if (m < n) {
            cout << "Loowater is doomed!" << endl;
            continue;
        }

        sort(heads.begin(), heads.end());
        sort(knights.begin(), knights.end());
        
        reverse(heads.begin(), heads.end());
        reverse(knights.begin(), knights.end());

        long total = 0;

        while (heads.size() && knights.size()) {
            if (knights.back() >= heads.back()) {
                total += knights.back();
                heads.pop_back();
            } knights.pop_back();
        }

        if (heads.empty())
            cout << total << endl;
        else
            cout << "Loowater is doomed!" << endl;
    }
}
