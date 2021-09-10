#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> votes;
    string in;

    while (getline(cin, in)) {

        if (in.compare("***") == 0) {
            break;
        }

        votes[in]++;
    }

    int max = -1;
    for (auto c : votes) {

        if (c.second > max) {
            max = c.second;
            in = c.first;
        } else if (c.second == max) {
            cout << "Runoff!" << endl;
            return 0;
        }
    } cout << in << endl;
}