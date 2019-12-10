#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != -1) {
        vector<map<int, int>> vertices;
        for (int i = 0; i < n; i++) {
            map<int, int> adjacencies;
            for (int j = 0; j < n; j++) {
                int e;
                cin >> e;

                if (e) adjacencies[j]++;
            }
            vertices.push_back(adjacencies);
        }

        for (int v = 0; v < n; v++) {
            map<int, int> adj = vertices[v];
            bool tri = false;
            for (int u = 0; u < n; u++) {
                if (!tri)
                for (int w = 0; w < n; w++) {
                    if (!tri)
                    if (adj[u] && adj[w] && vertices[u][w]) tri = true;
                }
            }

            if (!tri) cout << v << " ";
        } cout << endl;
    }
}