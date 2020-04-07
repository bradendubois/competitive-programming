#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <math.h>

typedef long long ll;

using namespace std;

ll ls_to_dec(vector<char> sequence) {
    bool positive = (sequence[0] == 'S');
    ll total = 0, idx=sequence.size()-3;
    //cout << idx << endl;
    for (int i = 1; i < sequence.size()-1; i++) {
        //cout << sequence[i] << endl;
        if (sequence[i] == 'T') {
            total += pow(2, idx);
        } idx--;
    } 
    if (!positive) total *= -1;
    return total;
}

int main() {

    stack<ll> ls_stack;

    string instructions;
    cin >> instructions;

    int cursor = 0;
    while (cursor < instructions.size()) {

        // S
        if (instructions[cursor] == 'S') {
            cursor++;

            // S - Push integer
            if (instructions[cursor] == 'S') {

                vector<char> sequence;
                while (true) {
                    cursor++;
                    sequence.push_back(instructions[cursor]);
                    if (instructions[cursor] == 'N')
                        break;
                }

                cursor++;
                ls_stack.push(ls_to_dec(sequence));

                // cout << ls_stack.top() << endl;

            // N
            } else {
                cursor++;

                // Push top copy
                if (instructions[cursor] == 'S') {
                
                    cursor++;
                    if (ls_stack.empty()) {
                        cout << "Invalid copy operation" << endl;
                    } else ls_stack.push(ls_stack.top());

                // Swap top two elements
                } else if (instructions[cursor] == 'T') {
                    cursor++;
                    if (ls_stack.size() < 2) {
                        cout << "Invalid swap operation" << endl;
                    } else {
                        ll temp = ls_stack.top();
                        ls_stack.pop();
                        ll temp2 = ls_stack.top();
                        ls_stack.pop();
                        ls_stack.push(temp);
                        ls_stack.push(temp2);
                    }

                // Pop top
                } else if (instructions[cursor] == 'N') {
                    cursor++;

                    if (ls_stack.empty()) {
                        cout << "Invalid remove operation" << endl;
                    } else {
                        ls_stack.pop();
                    }
                }
            }

        // T
        } else {
            cursor++;

            // S
            if (instructions[cursor] == 'S') {
                cursor++;

                // S
                if (instructions[cursor] == 'S') {
                    cursor++;

                    // Sum top two and push
                    if (instructions[cursor] == 'S') {
                        cursor++;

                        if (ls_stack.size() < 2) {
                            cout << "Invalid addition operation" << endl;
                        } else {
                            ll temp, temp2;
                            temp = ls_stack.top();
                            ls_stack.pop();
                            temp2 = ls_stack.top();
                            ls_stack.pop();
                            ls_stack.push(temp + temp2);
                        }
                
                    // Subr top two and push
                    } else if (instructions[cursor] == 'T') {
                        cursor++;

                        if (ls_stack.size() < 2) {
                            cout << "Invalid subtraction operation" << endl;
                        } else {
                            ll temp, temp2;
                            temp = ls_stack.top();
                            ls_stack.pop();
                            temp2 = ls_stack.top();
                            ls_stack.pop();
                            ls_stack.push(temp2 - temp);
                        }
                
                    // Mul top two and push
                    } else if (instructions[cursor] == 'N') {
                        cursor++;

                        if (ls_stack.size() < 2) {
                            cout << "Invalid multiplication operation" << endl;
                        } else {
                            ll temp, temp2;
                            temp = ls_stack.top();
                            ls_stack.pop();
                            temp2 = ls_stack.top();
                            ls_stack.pop();
                            ls_stack.push(temp * temp2);
                        }

                    }
                
                } else if (instructions[cursor] == 'T') {
                    cursor++;

                    // Quot top two and push
                    if (instructions[cursor] == 'S') {
                        cursor++;

                        if (ls_stack.size() < 2) {
                            cout << "Invalid division operation" << endl;
                        } else if (ls_stack.top() == 0) {
                            cout << "Division by zero" << endl;
                        } else {
                            ll temp, temp2;
                            temp = ls_stack.top();
                            ls_stack.pop();
                            temp2 = ls_stack.top();
                            ls_stack.pop();
                            ls_stack.push(temp2 / temp);
                        }
                    }
                }
            // Print top
            } else if (instructions[cursor] == 'N') {

                cursor += 3;
                if (ls_stack.empty()) {
                    cout << "Invalid print operation" << endl;
                } else {
                    cout << ls_stack.top() << endl;
                    ls_stack.pop();
                }
            }
        }
    }
}