#include <iostream>

using namespace std;

int main()  {
    int n, T, task, completed = 0;
    cin >> n >> T;

    while (n--) {
        cin >> task;
        if (T < task)
            break;
        
        T -= task;
        completed++;
    } cout << completed << endl;
}
