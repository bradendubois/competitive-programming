#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int diff = N - M;
    
    if (diff < 0) {
        cout << "Dr. Chaz will have " << diff * -1 << " piece" << (diff == -1 ? "" : "s") << " of chicken left over!" << endl;
    } else {
        cout << "Dr. Chaz needs " << diff << " more piece" << (diff == 1 ? "" : "s") << " of chicken!" << endl;
    }

    return 0;
}