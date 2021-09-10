#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int h1, h2, in;

    vector<int> boxes;

    for (int i = 0; i < 6; i++) {
        cin >> in;
        boxes.push_back(in);
    } 

    sort(boxes.begin(), boxes.end());
    
    cin >> h1 >> h2;
    
    while (std::next_permutation(boxes.begin(), boxes.end())) {

        if (boxes[0]+boxes[1]+boxes[2]==h1 && boxes[3]+boxes[4]+boxes[5]==h2) {
            
            vector<int> tower1, tower2;

            tower1.push_back(boxes[0]);
            tower1.push_back(boxes[1]);
            tower1.push_back(boxes[2]);

            tower2.push_back(boxes[3]);
            tower2.push_back(boxes[4]);
            tower2.push_back(boxes[5]);

            sort(tower1.rbegin(), tower1.rend());
            sort(tower2.rbegin(), tower2.rend());

            cout << tower1[0] << " " << tower1[1] << " " << tower1[2] << " ";
            cout << tower2[0] << " " << tower2[1] << " " << tower2[2] << endl;
            return 0;
        }
    }
}