#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    cout << fixed << setprecision(4);
    
    for (int i = 0; i < N; i++) {
        int b;
        double p;
        
        cin >> b >> p;

        double bpm = (60 * b) / p;
        double err = 60 / p;

        cout << bpm - err << " " << bpm << " " << bpm + err << endl;
    }
}