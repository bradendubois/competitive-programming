#include <iostream>
#include <vector>

using namespace std;

pair<int, int> result(vector<string> instructions, int override, string override_value) {

    // Up = 0, Right = 1, Down = 2, Left = 3;
    int x = 0, y = 0, dir = 0;

    for (int i = 0; i < instructions.size(); i++) {

        string instruction = instructions[i];

        if (i == override) {
            instruction = override_value;
        }

        if (instruction.compare("Forward") == 0) {

            switch (dir) {
                case 0:
                    y++;
                    break;
                case 1:
                    x++;
                    break;
                case 2:
                    y--;
                    break;
                case 3:
                    x--;
                    break;
                default:
                    cout << "ERROR" << endl;
                    break;
            }
        } else if (instruction.compare("Left") == 0) {
            dir = ((dir + 4) - 1) % 4;
        } else {
            dir = ((dir + 4) + 1) % 4;
        }
    }

    return pair<int, int>{x, y};
}

int main() {

    int x, y, n;
    cin >> x >> y >> n;

    vector<string> instructions(n);
    vector<string> options{"Left", "Right", "Forward"};

    for (auto & w : instructions) {
        cin >> w;
    }

    for (int i = 0; i < n; i++) {
        for (auto alternative: options) {

            pair<int, int> loc = result(instructions, i, alternative);
            if (loc.first == x && loc.second == y) {
                cout << i + 1 << " " << alternative << endl;
                return 0;
            }
        }
    }
}