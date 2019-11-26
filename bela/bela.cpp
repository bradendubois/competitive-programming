#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    char B;

    cin >> N >> B;
    N *= 4;

    map<char, int> dominant;
    map<char, int> nondominant;
    
    dominant['A'] = 11;
    nondominant['A'] = 11;
    dominant['K'] = 4;
    nondominant['K'] = 4;
    dominant['Q'] = 3;
    nondominant['Q'] = 3;
    dominant['J'] = 20;
    nondominant['J'] = 2;
    dominant['T'] = 10;
    nondominant['T'] = 10;
    dominant['9'] = 14;
    nondominant['9'] = 0;
    dominant['8'] = 0;
    nondominant['8'] = 0;
    dominant['7'] = 0;
    nondominant['7'] = 0;

    int total = 0;

    string in;
    while (N--) {
        cin >> in;
        if (in.at(1) == B) total += dominant[in.at(0)];
        else total += nondominant[in.at(0)];
    }

    cout << total << endl;
}