#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, p;
    cin >> n >> p;

    vector<int> distances(n);

    for (int x = 0; x < n; x++) {
        cin >> distances[x];
    }

    sort(distances.begin(), distances.end());

    int min_distance = 0;
    
    for (int x = 0; x < n; x++) {
        int result = p * (x + 1);
        min_distance = max(min_distance, result - distances[x]);
    }

    cout << min_distance + distances[0] << endl;
    return 0;
}