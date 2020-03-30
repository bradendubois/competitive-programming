#include <iostream>
#include <vector>

using namespace std;

int main() {

    int s, t, n, total_taken = 0;
    cin >> s >> t >> n;

    vector<int> walk_times, ride_times, intervals;
    
    int d, b, c;
    for (int i = 0; i < n+1; i++) {
        cin >> d;
        walk_times.push_back(d);
    }

    for (int i = 0; i < n; i++) {
        cin >> b;
        ride_times.push_back(b);
    }

    for (int i = 0; i < n; i++) {
        cin >> c;
        intervals.push_back(c);
    }

    int wait;
    for (int i = 0; i < n; i++) {
        total_taken += walk_times[i];

        wait = total_taken % intervals[i];
        if (wait)
            total_taken += intervals[i] - wait;

        total_taken += ride_times[i];
    } total_taken += walk_times.back(); // Last walk at index n; last bus to class

    if (t - s >= total_taken)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}