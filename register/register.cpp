#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Increment the given read-in vector recursively, according to the limits
// indicated by the limit vector
void increment(vector<int> & read, vector<int> & limit, int i) {
    if (read[i] == limit[i]) {
        read[i] = 0;
        increment(read, limit, i+1);
    } else {
        (read[i])++;
    }
}

// Check two vectors for equivalence
int same(vector<int> & read, vector<int> & limit) {
    for (int i = 0; i < read.size(); i++) {
        if (read[i] != limit[i]) {
            return 0;
        }
    }

    return 1;
}


int main() {

    // The vector of read in data
    vector<int> read;
    read.resize(8, 0);

    // The hard-coded vector of limits for the "register"s
    vector<int> limits = {1, 2, 4, 6, 10, 12, 16, 18};

    // Read in the numbers
    for(int i = 0; i < 8; i++) {
        cin >> read[i];
    }

    int total = 0;

    // Increment until reached the upper-limit
    while (!same(read, limits)) {
        total++;
        increment(read, limits, 0);
    }

    // Output
    cout << total << endl;

    return 0;
}