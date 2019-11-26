#include <iostream>
#include <vector>

using namespace std;

int main() {
    int ideal [] = {1, 1, 2, 2, 2, 8};
    vector<int> has;

    int x = 6;
    
    int in;
    while (x--) { 
        cin >> in; 
        has.push_back(in);
    }
    
    for (int i = 0; i < 6; i++) {
        cout << ideal[i] - has[i] << " ";
    }
    cout << endl;
}