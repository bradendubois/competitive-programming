#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct MinSet {
    int occurrence;
    vector<char> lowest_chars;
};

MinSet min_set(vector<char> & queue, vector<char> & chars) {
    
    // Count all occurrences of all groups of characters
    int mins = INT32_MAX;
    vector<char> min_chars;
    
    for (char c: chars) {
        
        int curTotal = 0;
        char prev = ' ';

        for (int i = 0; i < queue.size(); i++) {
            char cur = queue[i];
            // cout << " at " << cur;

            if (cur == c && cur != prev) {
                curTotal++;
            }

            prev = cur;
        }

        if (curTotal == mins) {
            min_chars.push_back(c);
        } else if (curTotal < mins) {
            mins = curTotal;
            min_chars.clear();
            min_chars.push_back(c);
        }
    }
    
    MinSet set;
    set.lowest_chars = min_chars;
    set.occurrence = mins;

    return set;
}

vector<vector<char>> watch(vector<char> queue, vector<char> chars_in, char c) {
    vector<char> new_queue;
    vector<char> chars;

    for (int i = 0; i < queue.size(); i++) {
        if (queue[i] != c) new_queue.push_back(queue[i]);
    }

    for (int i = 0; i < chars_in.size(); i++) {
        if (chars_in[i] != c) chars.push_back(chars_in[i]);
    }

    vector<vector<char>> vec;
    vec.push_back(new_queue);
    vec.push_back(chars);
    return vec;
}

int WatchLater(vector<char> & queue, vector<char> & chars) {

    if (chars.empty()) {
        return 0;
    }

    if (chars.size() == 1) {
        return 1;
    }

    if (chars.size() == queue.size()) {
        return chars.size();
    }

    MinSet nexts = min_set(queue, chars);

    int cur = nexts.occurrence;
    int min = INT32_MAX;
    int result;
    
    for (char c: nexts.lowest_chars) {
        
        vector<vector<char>> result_data = watch(queue, chars, c);
        result = WatchLater(result_data[0], result_data[1]);
     
        if (result < min) {
            min = result;
        }
    }
   
    return cur + min;
}

int main() {
    int n, k;
    cin >> n >> k;

    string order;
    cin >> order;

    map<char, int> seen;
    vector<char> queue;
    vector<char> chars;

    for (int i = 0; i < order.size(); i++) {
        queue.push_back(order.at(i));
        if (seen[order.at(i)] == 0) {
            seen[order.at(i)]++;
            chars.push_back(order.at(i));
        }
    }

    int cost = WatchLater(queue, chars);
    cout << cost << endl;
}