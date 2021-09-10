#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int b, d, c, l;
    cin >> b >> d >> c >> l;

    vector<vector<int>> legs;

    for (int i = 0; i <= l; i++) {
        if (i * b > l)
                    break;

        for (int j = 0; j <= l; j++) {
            if (i * b + j * d > l)
                    break;


            for (int k = 0; k <= l; k++) {
                if (i * b + j * d + k * c > l)
                    break;


                if (i * b + j * d + k * c == l)
                    legs.push_back({i, j, k});
            }
        }
    }

    sort(legs.begin(), legs.end());
    for (auto legSet: legs)
        cout << legSet[0] << " " << legSet[1] << " " << legSet[2] << endl; 
    

    if (legs.empty())
        cout << "impossible" << endl;
}
