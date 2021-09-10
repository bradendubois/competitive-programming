#include <iostream>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

int main() {
    string line;
    
    int length, longestLine = 0, ragged = 0;
    vector<int> lengths;

    while (getline(cin, line)){
        length = line.size();
        lengths.push_back(length);
        if (length > longestLine)
            longestLine = length;
    }
        
    for (int val = 0; val < lengths.size()-1; val++) {
        ragged += pow((longestLine - lengths[val]), 2);
    } cout << ragged << endl;
}
