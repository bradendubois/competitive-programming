#include <iostream>

using namespace std;

int main() {
    int N;
    string pre, post;
    cin >> N >> pre >> post;

    for (int i = 0; i < pre.size(); i++) {
        char a = pre.at(i), b = post.at(i);
        if ((N % 2 == 0 && a != b) || (N % 2 != 0 && a == b)) {
                cout << "Deletion failed" << endl;
                return 0;
        }
    } cout << "Deletion succeeded" << endl;
}