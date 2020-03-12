#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef map<int, vector<int>> graph;

void dfs(graph & g, map<int, bool> & seen, int cur) {
    seen[cur] = true;
    for (auto out: g[cur]) {
        if (!seen[out]) dfs(g, seen, out);
    }
}

int main() {
    int N, M, a, b;
    cin >> N >> M;
    graph g;

    while (M--) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    map<int, bool> seen;
    dfs(g, seen, 1);
    bool miss = false;
    for (int i = 1; i <= N; i++) {
        if (!seen[i]) {
            cout << i << endl;
            miss = true;
        }
    }

    if (!miss) cout << "Connected" << endl;
}
