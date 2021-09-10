#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, winners = 12;
    cin >> N;

    map<string, int> university;

    while (winners && N--) {
        string uni, team;
        cin >> uni >> team;

        if (!university[uni]) {
            winners--;
            university[uni]++;
            cout << uni << " " << team << endl;
        }
    }
}