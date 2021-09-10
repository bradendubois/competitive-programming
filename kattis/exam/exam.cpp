#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int k;
    string exam, friend_exam;
    cin >> k >> exam >> friend_exam;

    int same = 0, different = 0, length = exam.length();

    for (int i = 0; i < length; i++) {
        if (exam.at(i) == friend_exam.at(i))
            same++; 
        else 
            different++;
    }

    cout << min(same, k) + min(different, length - k) << endl;
}