#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    int N, t, i;
    cin >> N >> t;

    set<int> seen;
    vector<int> in(N);
    map<int, int> count;
    switch (t) {
        case (1):
            while (N--) {
                cin >> i;
                seen.insert(i);
                if (seen.count(7777 - i)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            } 

            cout << "No" << endl;
            return 0;
        case (2):
            while (N--) {
                cin >> i;
                if (seen.count(i)) {
                    cout << "Contains duplicate" << endl;
                    return 0;
                } seen.insert(i);
            } 

            cout << "Unique" << endl;
            return 0;
        case (3):

            for (int n = 0; n < N; n++) {
                cin >> i;
                count[i]++;
                if (count[i] > (N/2)) {
                    cout << i << endl;
                    return 0;
                }
            } 

            cout << -1 << endl;
            return 0;
        case (4):

            for (auto & n : in)
                cin >> n;

            sort(in.begin(), in.end());
            if (in.size() % 2 == 0)
                cout << in[in.size() / 2 - 1] << " " << in[in.size() / 2] << endl;
            else
                cout << in[in.size() / 2] << endl;
            return 0;
        case (5):
            for (auto & n : in)
                cin >> n;

            sort(in.begin(), in.end());
            for (auto n : in) {
                if (n >= 100 && n <= 999)
                    cout << n << " ";
            } cout << endl;
            return 0;
    }
}