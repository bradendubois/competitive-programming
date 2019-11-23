#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void add_island(vector<int> & resources, vector<int>* island) {
    for (int i = 1; i < (*island).size(); i++) {
        resources[(*island)[i]-1]++;
    }
}

void remove_island(vector<int> & resources, vector<int>* island) {
    for (int i = 1; i < (*island).size(); i++) {
        resources[(*island)[i]-1]--;
    }
}

bool contains_repeat(vector<int>* island, vector<int> & cur) {
    for (int i = 1; i < (*island).size(); i++) {
        if (cur[(*island)[i]-1] == 1) {
            return true;
        } 
    } return false;
}

bool coexistence(map<int, vector<vector<int>*>> & resource_to_islands, vector<int> cur, int resource, int limit) {

    if (resource > limit) {        
        return true;
    } else if (cur[resource-1] > 0) {
        return coexistence(resource_to_islands, cur, resource+1, limit);
    } else { 
        for (auto island : resource_to_islands[resource]) {
            if ((*island)[0] == 1) {
                if (contains_repeat(island, cur)) {
                    continue;
                } else {
                    vector<int> new_cur = cur;
                    add_island(new_cur, island);
                    (*island)[0] == 0;
                    if (coexistence(resource_to_islands, new_cur, resource+1, limit)) {
                        return true;
                    }
                    (*island)[0] == 1;
                }
            }
        }

        return false;
    }
}

int main() {

    int m, n;
    cin >> m >> n;

    // A mapping from a resource to the islands holding this resource
    map<int, vector<vector<int>*>> resource_to_islands;

    // Read in every island's resources
    for (int i = 0; i < m; i++) {

        vector<int>* island = new vector<int>();

        island->push_back(1);   // Index 0 of an island will note its availability!

        // Zero is the terminator for an island's resource lists
        int resource;
        cin >> resource;

        while (resource) {

            // Add the resource to this island
            island->push_back(resource); 

            // Add the island to the map at the spots denoting it has that resource
            resource_to_islands[resource].push_back(island);    

            cin >> resource;
        }
    }

/*

    for (int i = 1; i <= n; i++) {

        vector<vector<int>*> islands = resource_to_islands[i];
        sort(islands.begin(), islands.end(), [](const vector<int>* a, const vector<int>* b){ return a->size() > b->size(); });
        resource_to_islands[i] = islands;
    }

*/

    vector<int> cur = vector<int>(n,0);

    if (coexistence(resource_to_islands, cur, 1, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}