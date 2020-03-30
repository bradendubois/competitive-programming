#include <iostream>
#include <stack>
#include <string.h>
#include <math.h>

using namespace std;

int main() {

    string line;

    int N;
    getline(cin, line);
    N = stoi(line);

    while(N--) {
    
        stack<long> digits;
        getline(cin, line);

        if (line.back() == ',') line.push_back(',');

        while (line.size()) {
            if (line.front() == ',') {
                digits.push(-1);
                line.erase(0, 1);
            } else {
                if (line.find(',') != string::npos) {
                    digits.push(stol(line.substr(0, line.find(','))));
                    line.erase(0, line.find(',')+1);
                } else { 
                    digits.push(stol(line));
                    line.erase(0, line.size()+1);
                }
            }             
        }

        long long total = 0, index = 0;
        while (digits.size()) {
            if (digits.top() > 0) {
                total += pow(60, index) * digits.top();
            } 
            digits.pop();
            index++;
        } cout << total << endl;
    }
}
