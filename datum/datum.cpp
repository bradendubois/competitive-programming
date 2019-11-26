#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {

    map<int, int> passed;
    
    passed[1] = 0;
    passed[2] = passed[1] + 31;
    passed[3] = passed[2] + 28;
    passed[4] = passed[3] + 31;
    passed[5] = passed[4] + 30;
    passed[6] = passed[5] + 31;
    passed[7] = passed[6] + 30;
    passed[8] = passed[7] + 31;
    passed[9] = passed[8] + 31;
    passed[10] = passed[9] + 30;
    passed[11] = passed[10] + 31;
    passed[12] = passed[11] + 30;

    string days [] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"}; 

    int D, M;
    cin >> D >> M;

    int day = passed[M] + D - 1;
    cout << days[day % 7] << endl;
}