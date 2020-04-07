#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {

    int k, m, r, c, in;
    while (cin >> k >> m) {

        set<int> selected;
        while (k--) {
            cin >> in;
            selected.insert(in);
        }

        map<int, set<int>> categories;
        while (m--) {
            
            set<int> category;
            cin >> c >> r;
            while (c--) {
                cin >> in; 
                category.insert(in);
            } categories[r] = category;
        }



        int satisfied = 0;
        for (auto key : categories) {
            int total = 0;

            cout << endl << endl;
            cout << key.first << endl;
            for (auto cl : key.second) {
                cout << cl << endl;
                if (selected.count(cl))
                    total++;
            }
            

            cout << "Need: " << key.first << ", Got: " << total << endl;
            cout << endl << endl;
            if (total >= key.first)
                satisfied++;            
        }

        

        cout << (satisfied == categories.size() ? "no" : "yes") << endl;
    }
}