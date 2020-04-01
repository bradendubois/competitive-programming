#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {

    string country;
    int n, q, year, trip;
    cin >> n;

    map<string, vector<int>> tripYears;


    while (n--) {
        cin >> country >> year;
        tripYears[country].push_back(year);
    }

    for (auto country: tripYears) {
        vector<int> toSort = country.second;
        sort(toSort.begin(), toSort.end());
        tripYears[country.first] = toSort;
    }

    cin >> q;
    while (q--) {
        cin >> country >> trip;
        cout << tripYears[country][trip-1] << endl;
    }
}