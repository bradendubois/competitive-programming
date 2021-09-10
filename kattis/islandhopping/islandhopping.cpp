#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

struct Island {
    double x;
    double y;
    int rep;
    int idx;
};

struct Edge {
    double distance;
    Island * first;
    Island * second;
};

int islandRep(vector<Island*> & islands, Island * island) {
    if ((*island).rep == (*island).idx)
        return (*island).rep;
    else
        return islandRep(islands, islands[(*island).rep]);
}

void islandUnion(vector<Island*> & islands, Island * first, Island * second) {
    (*islands[islandRep(islands, second)]).rep = islandRep(islands, first);
}

bool sortEdges(Edge first, Edge second) {
    return first.distance < second.distance;
}

int main() {

    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        double x, y;

        vector<Island*> islands;
        for (int i = 0; i < m; i++) {
            Island *currentIsland = new Island;
            cin >> x >> y;
            (*currentIsland).x = x;
            (*currentIsland).y = y;
            (*currentIsland).rep = i;
            (*currentIsland).idx = i;
            islands.push_back(currentIsland);
        }

        vector<Edge> edges;

        for (int firstIsland = 0; firstIsland < m-1; firstIsland++) {
            for (int secondIsland = firstIsland+1; secondIsland < m; secondIsland++) {
                Edge e;
                e.first = islands[firstIsland];
                e.second = islands[secondIsland];
                e.distance = hypot(abs((*islands[firstIsland]).x -  (*islands[secondIsland]).x), 
                                    abs((*islands[firstIsland]).y - (*islands[secondIsland]).y));
                edges.push_back(e);
            }
        }

        sort(edges.begin(), edges.end(), sortEdges);

        double total = 0;
        for (auto edge : edges) {
            if (islandRep(islands, edge.first) != islandRep(islands, edge.second)) {
                total += edge.distance;
                islandUnion(islands, edge.first, edge.second);
            }
        } cout << total << endl;
    }

    
}