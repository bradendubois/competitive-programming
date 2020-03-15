#include <iostream>
#include <string.h>

using namespace std;

int main() {

    string sequence;
    cin >> sequence;
    bool up = (sequence[0] == 'U');
    bool up1 = up, up2 = up, up3 = up, wantUp;
    int swap1 = 0, swap2 = 0, swap3 = 0;

    for (int i = 1; i < sequence.size(); i++) {
        wantUp = (sequence[i] == 'U');

        if (wantUp) {

            if (!up1) {
                swap1 += 1;
                up1 = true;
            }

            if (!up2) {
                swap2++;
            } swap2++;
            up2 = false;
            
            if (!up3) {
                swap3++;
                up3 = true;
            }

        } else {

            if (up1) {
                swap1++;
            } up1 = true;
            swap1++;

            if (up2) {
                swap2++;
                up2 = false;
            }

            if (up3) {
                swap3++;
                up3 = false;
            }

        }
    }

    cout << swap1 << endl;
    cout << swap2 << endl;
    cout << swap3 << endl;

}