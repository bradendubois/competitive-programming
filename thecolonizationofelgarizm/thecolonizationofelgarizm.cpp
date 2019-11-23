#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool minimally_satisfied(vector<int> resources) {
    for (int i = 0; i < resources.size(); i++) {
        if (resources[i] == 0) return false;
    } return true;
}

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

bool coexistence(map<int, vector<vector<int>*>> & resource_to_islands, vector<int> & zax, vector<int> & xaz, int resource, int limit) {

    /* 

    cout << "start" << endl;

    cout << "resources" << endl;

    cout << "zax ";

    for (auto i : zax) cout << i << " ";
    cout << endl;

    cout << "xaz ";

    for (auto i : xaz) cout << i << " ";
    cout << endl;

    */


    // cout << zax[resource] << endl;

    if (resource > limit) {
        
        return (minimally_satisfied(zax) && minimally_satisfied(xaz));
        
    } else if (zax[resource-1] > 0 && xaz[resource-1] > 0) {

        return coexistence(resource_to_islands, zax, xaz, resource + 1, limit);

    } else if (zax[resource-1] > 0) {
        
        // Get an island
        vector<vector<int>*> islands = resource_to_islands[resource];
        
        for (int i = 0; i < islands.size(); i++) {

            vector<int>* next_avail = nullptr;

            if ((*islands[i])[0] == 0) {
                continue;
            }
                
            (*islands[i])[0] = 0;
            next_avail = islands[i];
            add_island(xaz, next_avail);

            if (coexistence(resource_to_islands, zax, xaz, resource+1, limit)) return true;
            else {
                // Free the island
                remove_island(xaz, next_avail);       
                (*next_avail)[0] = 1;
            }
        } return false;

    } else if (xaz[resource-1] > 0) {

        // Get an island
        vector<vector<int>*> islands = resource_to_islands[resource];
        
        for (int i = 0; i < islands.size(); i++) {

            vector<int>* next_avail = nullptr;

            if ((*islands[i])[0] == 0) {
                continue;
            }
                
            (*islands[i])[0] = 0;
            next_avail = islands[i];
            add_island(zax, next_avail);

            if (coexistence(resource_to_islands, zax, xaz, resource+1, limit)) return true;
            else {
                // Free the island
                remove_island(zax, next_avail);       
                (*next_avail)[0] = 1;
            }
        } return false;
        
    } else {

        // Islands for this resource
        vector<vector<int>*> islands = resource_to_islands[resource];

        for (int i = 0; i < islands.size(); i++) {

            vector<int>* next_avail_1 = nullptr;

            if ((*islands[i])[0] == 0) {
                continue;
            }
                                        
            (*islands[i])[0] = 0;
            next_avail_1 = islands[i];
            add_island(zax, next_avail_1);

            for (int j = 0; j < islands.size(); j++) {

                vector<int>* next_avail_2 = nullptr;

                if ((*islands[j])[0] == 0) {
                    continue;
                }
                
                (*islands[j])[0] = 0;
                next_avail_2 = islands[j];
                add_island(xaz, next_avail_2);

                if (coexistence(resource_to_islands, zax, xaz, resource+1, limit)) return true;
                else {
                    // Free the island
                    remove_island(xaz, next_avail_2);       
                    (*next_avail_2)[0] = 1;
                }
            }

            // Free the island
            remove_island(zax, next_avail_1);       
            (*next_avail_1)[0] = 1;
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

    for (int i = 1; i <= n; i++) {

        vector<vector<int>*> islands = resource_to_islands[i];
        sort(islands.begin(), islands.end(), [](const vector<int>* a, const vector<int>* b){ return a->size() < b->size(); });
        resource_to_islands[i] = islands;
    }

    vector<int> zax = vector<int>(n, 0);
    vector<int> xaz = vector<int>(n, 0);


    if (coexistence(resource_to_islands, zax, xaz, 1, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    /* 
    for (int i = 1; i <= n; i++) {

        vector<vector<int>*> res_list = resource_to_islands[i];

        cout << "resource " << i << endl;

        for (int j = 0; j < res_list.size(); j++) {

            vector<int>* island = res_list[j];
            
            for (int k = 0; k < island->size(); k++) {
                cout << (*island)[k] << " ";
            } cout << endl;

        } cout << endl;
    }

    (*(resource_to_islands[5][0]))[0] = 0;

    for (int i = 1; i <= n; i++) {

        vector<vector<int>*> res_list = resource_to_islands[i];

        cout << "resource " << i << endl;

        for (int j = 0; j < res_list.size(); j++) {

            vector<int>* island = res_list[j];
            
            for (int k = 0; k < island->size(); k++) {
                cout << (*island)[k] << " ";
            } cout << endl;

        } cout << endl;
    }
    
    */

    return 0;
}