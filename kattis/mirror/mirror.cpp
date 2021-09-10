#include <iostream>
#include <stack>

using namespace std;

int main() {
    int T, R, C;
    char in;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cout << "Test " << i+1 << endl;
        cin >> R >> C;
        
        stack<stack<char>> image;
        while (R--) {
            stack<char> row;
            for (int j = 0; j < C; j++) {
                cin >> in;
                row.push(in);
            } image.push(row);
        }


        stack<char> pop_row;
        while (image.size()) {
            pop_row = image.top();
            image.pop();

            while (pop_row.size()) {
                cout << pop_row.top();
                pop_row.pop();
            } cout << endl;
        }
    }
}