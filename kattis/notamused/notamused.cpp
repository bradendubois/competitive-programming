#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string.h>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    string line;
    map<string, vector<int>> times;
    vector<string> names;
    int day = 0;
    while (getline(cin, line)) {
        if (strcmp(line.c_str(), "OPEN") == 0) {
            times.clear();
            names.clear();
        } else if (strcmp(line.c_str(), "CLOSE") == 0) {
            
            day++;
            cout << "Day " << day << endl;
            sort(names.begin(), names.end());
            
            for (auto name: names) {
                double cost = 0;
                for (int time = 0; time < times[name].size(); time += 2) {
                    cost += times[name][time+1] - times[name][time];
                } cout << name << " $" << cost * 0.1 << endl;
            } cout << endl;
        
        } else {
            stringstream conv(line);
            string name;
            conv >> name; // Ignore enter/exit
            conv >> name;

            int time;
            conv >> time;

            if (times[name].size() == 0) names.push_back(name);
            times[name].push_back(time);
        }
    }
}