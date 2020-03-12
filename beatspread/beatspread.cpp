#include <iostream>

using namespace std;

int main() {
     int n, a, b, hi, low;
     cin >> n;

     while (n--) {
         cin >> a >> b;

         if (a < b || (a + b) % 2 == 1) {
             cout << "impossible" << endl;
             continue;
         }

         hi = (a + b) / 2;
         low = a - hi;

         cout << hi << " " << low << endl;
     }
}