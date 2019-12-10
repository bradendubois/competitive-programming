#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

bool digit(string s) {
    for (auto c : s) {
        if (!isdigit(c)) return false;
    } return true;
}

int main() {
    int N;
    cin >> N;
    map<double, string> size_to_cup;
    vector<double> sizes;

    while (N--) {
        string a, b;
        cin >> a >> b;
        double x;

        if (digit(b))  {
            stringstream conv(b);
            conv >> x;
            size_to_cup[x] = a;
            sizes.push_back(x);
        } else {
            stringstream conv(a);
            conv >> x;
            size_to_cup[x/2] = b;
            sizes.push_back(x/2);
        }
    }

    sort(sizes.begin(), sizes.end());

    for (auto n : sizes) {
        cout << size_to_cup[n] << endl;
    }
}