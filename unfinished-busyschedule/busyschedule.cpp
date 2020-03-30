#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int to_time(string & a) {
    int total = 0;
    if (a.find("p.m.") != string::npos) total += 12 * 60;
    total += stoi(a.substr(0, a.find(":"))) * 60;
    total += stoi(a.substr(a.find(":")+1,2));
    return total;
}

bool comparison(string & a, string & b) {
    return (to_time(a) > to_time(b));
}

int main() {
    
    int N;    
    while (cin >> N && N) {    

        string appointment;
        getline(cin, appointment); // Skip one because reading N

        vector<string> appointments;
        while (N--) {
            getline(cin, appointment);
            appointments.push_back(appointment);
        }

        sort(appointments.begin(), appointments.end(), comparison);
    
        for (auto a : appointments) cout << a << endl;
        cout << endl;
    }
}