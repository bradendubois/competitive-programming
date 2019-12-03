#include <iostream>
#include <vector>
#include <map>

using namespace std;

int minimum = INT32_MAX;

struct QueueResult {
    vector<char> queue;
    vector<char> chars;
};

int costToWatch(vector<char> & queue, vector<char> & chars, char c) {
    int total = 0;
    char prev = ' ';

    for (int i = 0; i < queue.size(); i++) {
        char cur = queue[i];
        if (cur == c && cur != prev) {
            total++;
        }

        prev = cur;
    }

    return total;
}

vector<char> sortBySize(vector<char> & queue, vector<char> & chars) {
    
    map<int, vector<char>> sizeMap;

    for (char c: chars) {
        int cost = costToWatch(queue, chars, c);
        sizeMap[cost].push_back(c);
    }

    // Count all occurrences of all groups of characters
    vector<char> min_chars;
    for (int i = 1; i <= 20; i++) {
        vector<char> cur = sizeMap[i];
        for (auto c: cur) min_chars.push_back(c);
    }

    return min_chars;
}

QueueResult watch(vector<char> queue, vector<char> chars_in, char c) {
    vector<char> new_queue;
    vector<char> chars;

    for (auto i : queue) {
        if (i != c) new_queue.push_back(i);
    }

    for (auto i : chars_in) {
        if (i != c) chars.push_back(i);
    }

    QueueResult result;
    result.queue = new_queue;
    result.chars = chars;
    return result;
}

void WatchLater(vector<char> & queue, vector<char> & chars, int costSoFar) {


    if (chars.empty()) {
        if (costSoFar < minimum) {
            minimum = costSoFar;
            return;
        }
    }

    /* 


    vector<char> new_queue = queue, new_chars = chars;


    vector<char> singles = singleGroup(queue, chars);
    int current = 0;
    for (auto c: singles) {
        QueueResult result_data = watch(new_queue, new_chars, c);
        new_queue = result_data.queue;
        new_chars = result_data.chars;
        current++;
    }

    if (new_chars.empty()) { 
        WatchLater(new_queue, new_chars, costSoFar + current);
    }

    */
    
    for (char c: sortBySize(queue, chars)) {
        int next = costToWatch(queue, chars, c);        
        if (costSoFar + next < minimum) {
            QueueResult result = watch(queue, chars, c);
            WatchLater(result.queue, result.chars, costSoFar + next);
        }
    }
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

    WatchLater(queue, chars, 0);
    cout << minimum << endl;
}