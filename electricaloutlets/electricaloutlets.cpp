#include <iostream>

using namespace std;

int main() {
    
    int N, K, O, t;
    
    cin >> N;
    
    while (N--) {
        cin >> K;
        t = (K - 1) * -1;
        while (K--) {
            cin >> O;
            t += O;
        }
        
        cout << t << endl;
    }
}