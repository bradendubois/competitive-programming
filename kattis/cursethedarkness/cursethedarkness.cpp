#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m;

    while (m--) {

        bool success = false;

        double X, Y, x, y;
        cin >> X >> Y >> n;
        
        while (n--) {

            cin >> x >> y;
            if (hypot(abs(X-x), abs(Y-y)) <= 8) {
                success = true;
            }
        }

        if (success) {
            cout << "light a candle" << endl;
        } else {
            cout << "curse the darkness" << endl;
        }
    }
}
