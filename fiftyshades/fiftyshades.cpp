#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string in;
    
    int N, total = 0;
    cin >> N;

    while (N--) {
        cin >> in;

        for_each(in.begin(), in.end(), [](char & c) {
            c = tolower(c);
        });

        if (in.find("pink") != string::npos || in.find("rose") != string::npos)
            total++;
    }    

    if (total)
        cout << total << endl;
    else
        cout << "I must watch Star Wars with my daughter" << endl;
}
