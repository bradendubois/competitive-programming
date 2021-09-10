#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    double v, theta, x, h1, h2, t, result;

    while (N--) {
        
        cin >> v >> theta >> x >> h1 >> h2;
        
        t = x / (v * cos((M_PI / 180) * theta));
        result = (v * t * sin((M_PI / 180) * theta)) - (0.5 * 9.81 * (t * t));

        if ((result - 1 > h1) && (result + 1 < h2))
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;
    }
}