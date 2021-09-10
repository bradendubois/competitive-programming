#include <iostream>
#include <vector>
#include <string.h>
#include <deque>

using namespace std;

int main() {
    deque<int> front, back;
    int N;
    cin >> N;

    while (N--) {
        string operation;
        int immediate;
        cin >> operation >> immediate;

        if (strcmp(operation.c_str(), "get") == 0) {
            if (immediate < front.size()) {
                cout << front[immediate];
            } else {
                cout << back[immediate-front.size()];
            } cout << endl;
        } else if (strcmp(operation.c_str(), "push_front") == 0) {
            front.push_front(immediate);
        } else if (strcmp(operation.c_str(), "push_middle") == 0) {
            
            int move;
            
            while (front.size() > back.size()) {
                move = front.back();
                front.pop_back();
                back.push_front(move); 
            }

            while (back.size() > front.size()) {
                move = back.front();
                back.pop_front();
                front.push_back(move);
            } 
            
            back.push_front(immediate);

        } else {
            back.push_back(immediate);
        }
    }
}