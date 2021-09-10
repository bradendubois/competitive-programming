#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int A, B, C, I, J, K;
    cin >> A >> B >> C >> I >> J >> K;

    vector<double> ratios;

    ratios.push_back((double) A / (double) I);
    ratios.push_back((double) B / (double) J);
    ratios.push_back((double) C / (double) K);

    sort(ratios.begin(), ratios.end());

    cout << fixed << setprecision(8);
    cout << A-I*ratios[0] << " " << B-J*ratios[0] << " " << C-K*ratios[0] << endl;
}