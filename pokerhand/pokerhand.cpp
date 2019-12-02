#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    string card;
    vector<char> cards;
    
    int x = 5;
    while (x--) {
        cin >> card;
        cards.push_back(card.at(0));
    }

    int max_count = 0;

    for (int i = 0; i < 5; i++) {

        char cur = cards[i];
        int seen = 1;

        for (int j = 0; j < 5; j++) {
            if (i != j && cur == cards[j]) {
                seen++;
            }
        }

        if (seen > max_count) {
            max_count = seen;
        }
    
    }

    cout << max_count << endl;
}