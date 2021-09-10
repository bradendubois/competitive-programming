#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int N, sour, bitter;
    cin >> N;

    vector<pair<int, int>> list;
    
    while (N--) {
        cin >> sour >> bitter;
        pair<int, int> ingredient;
        ingredient.first = sour;
        ingredient.second = bitter;
        list.push_back(ingredient);
    }

    int minimum = INT32_MAX, total;

    do {
        int sour = 0, bitter = 0;
        for (auto ingredient : list) {
            if (sour == 0 && ingredient.first != 0) 
                sour = ingredient.first;
            else 
                sour *= ingredient.first;
            bitter += ingredient.second;
            total = abs(sour - bitter);
            if (total < minimum) minimum = total;
        }
    } while (next_permutation(list.begin(), list.end()));

    cout << minimum << endl;
}