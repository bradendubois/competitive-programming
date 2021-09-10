#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> papers;

    int n, paper;
    cin >> n;

    while (n--) {
        cin >> paper;
        papers.push_back(paper);
    }

    sort(papers.rbegin(), papers.rend());

    int total = 0;
    for(int i = 0; i < papers.size(); i++) {
        if (papers[i] >= i+1) {
            total = i+1;
        } else break;
    }
    
    cout << total << endl;
}
