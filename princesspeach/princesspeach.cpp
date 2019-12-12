#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, Y, unique = 0;
    cin >> N >> Y;

    map<int, bool> obstacles;

    while (Y--) {
        int ob;
        cin >> ob;
        if (!obstacles[ob]) unique++;
        obstacles[ob] = true;
    }

    for (int i = 0; i < N; i++) 
        if (!obstacles[i]) cout << i << endl;
    
    cout << "Mario got " << unique << " of the dangerous obstacles." << endl;
}