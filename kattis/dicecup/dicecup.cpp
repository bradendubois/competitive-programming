#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = min(N, M) + 1; i <= max(N, M) + 1; i++)
        cout << i << endl;

    return 0;
}