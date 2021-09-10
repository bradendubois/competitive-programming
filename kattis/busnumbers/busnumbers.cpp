#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, in;
    cin >> N;

    vector<int> stops, current;
    vector<vector<int>> groups;

    while (N--) {
        cin >> in;
        stops.push_back(in);
    }

    // Sort the stops
    sort(stops.begin(), stops.end());    


    for (auto stop: stops) {
        // This stop is greater than 1 above the previous stop
        if (!current.empty() && stop != current.back()+1) {
            // Store this group
            groups.push_back(current);
            current.clear();
        } current.push_back(stop);
    } groups.push_back(current); // Edge case for last group

    for (auto group: groups) {
        // Always output the first item
        cout << group.front();
        // If multiple items in group, output the back
        if (group.size() > 1)
            // Output a dash if there is many items in this group
            cout << (group.size() > 2 ? "-" : " ") << group.back();
        
        // Another group? Output a space
        if (group.back() != groups.back().back()) cout << " ";
    } cout << endl;
}