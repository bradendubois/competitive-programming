#include <iostream>
#include <vector>
#include <string.h>
#include <set>

using namespace std;

typedef long long ll;

int main() {
    ll in;
    vector<ll> values;
    set<ll> vals;

    while (cin >> in) values.push_back(in);

    for (int i = 0; i < (1 << (values.size()-1)); i++) {
        ll total = 0, cur = values[0];
        for (int j = 1; j < values.size(); j++) {
            if (i & (1 << (j-1))) {
                total += cur;
                cur = values[j];
            } else cur = stoll(to_string(cur) + to_string(values[j]));
        } 
        total += cur;
        vals.insert(total);
    } cout << vals.size() << endl;
}