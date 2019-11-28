#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int people;
    cin >> people;
    int set = 1;
    while (people) {
    
        vector<string> stashed;
        int stash = people / 2;
        bool stash_next = false;
        
        string name;

        cout << "SET " << set++ << endl;

        while (people--) {
            cin >> name;
            if (stash_next) 
                stashed.push_back(name);
            else 
                cout << name << endl;
            
            stash_next = !stash_next;
        }

        while (stashed.size()) {
            name = stashed.back();
            stashed.pop_back();
            cout << name << endl;
        }

        cin >> people;
    }
}