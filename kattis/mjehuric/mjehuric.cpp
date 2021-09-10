#include <iostream>

using namespace std;

bool match(int * a, int * b) {
    for (int i = 0; i < 5; i++) {
        if (a[i] != b[i]) return false;
    } return true;
}

void swap(int * a, int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;
}


int main() {
    int a, b, c, d, e, temp;
    cin >> a >> b >> c >> d >> e;

    int num []{a, b, c, d, e};
    int perf []{1, 2, 3, 4, 5};

    while (1) {
        if (num[0] > num[1]) swap(num, 0, 1);
        if (num[1] > num[2]) swap(num, 1, 2);
        if (num[2] > num[3]) swap(num, 2, 3);
        if (num[3] > num[4]) swap(num, 3, 4);
        if (match(num, perf)) return 0;
    }
}