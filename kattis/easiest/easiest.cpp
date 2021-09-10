#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int sum = 0;
        int temp = N;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }

        int x = 11;
        while (1) {
            int cur_sum = 0;
            int test = N * x;
            while (test != 0) {
                cur_sum += test % 10;
                test /= 10;
            }

            if (cur_sum == sum) {
                cout << x << endl;
                break;
            }

            x++;
        }
    }
}