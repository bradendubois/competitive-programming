#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    int t_cur, t_prev = 0;
    double sample_cur, sample_prev = 0, area = 0;

    while (N--) {
        cin >> t_cur >> sample_cur;
        if (t_prev) {
            area += ((sample_cur + sample_prev) / 2) * (t_cur - t_prev);
            
        }
        t_prev = t_cur;
        sample_prev = sample_cur;
    }

    cout << fixed << setprecision(10) << area / 1000 << endl;
}