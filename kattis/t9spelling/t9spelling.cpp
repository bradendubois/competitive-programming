#include <iostream>
#include <map>

using namespace std;

int main() {

    map<char, int> mapping = {
        {'a', 2}, {'b', 22}, {'c', 222},
        {'d', 3}, {'e', 33}, {'f', 333},
        {'g', 4}, {'h', 44}, {'i', 444}, 
        {'j', 5}, {'k', 55}, {'l', 555},
        {'m', 6}, {'n', 66}, {'o', 666},
        {'p', 7}, {'q', 77}, {'r', 777}, {'s', 7777},
        {'t', 8}, {'u', 88}, {'v', 888},
        {'w', 9}, {'x', 99}, {'y', 999}, {'z', 9999},
        {' ', 0},
    };

    int N, curNum, nextNum;
    string line;
    cin >> N;
    
    getline(cin, line);
    for (int i = 1; i <= N; i++) {
        cout << "Case #" << i << ": ";
        getline(cin, line);
        for (int i = 0; i < line.size(); i++) {
            cout << mapping[line.at(i)];
            if (i < line.size()-1) {
                nextNum = mapping[line.at(i+1)];
                curNum = mapping[line.at(i)];
                if (curNum % 10 == nextNum % 10) cout << " ";
            }
        } cout << endl;
    }
}