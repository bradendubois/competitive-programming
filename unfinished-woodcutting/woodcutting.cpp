#include <iostream>

using namespace std;

int main() {
    int T, N, W;
    cin >> T;

    while (T--) {
        
        int piece, per_customer, accum = 0;
        cin >> N;


        for (int customer = N; customer > 0; customer--) {
            per_customer = 0;
            cin >> W;
            
            while (W--) {
                cin >> piece;
                per_customer += piece;
            }
            
            accum *= N;
            accum += per_customer;
        }

        cout << accum << endl;
        cout << N << endl;
        cout << (double) accum / (double) N << endl;
    }
}