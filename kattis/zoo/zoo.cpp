#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string line;
    int n, lists = 0;

    while (cin >> n && n) {

        getline(cin, line);
        map<string, int> list;
        lists++;

        while (n--) {

            string animal;

            getline(cin, line);
            stringstream conv(line);
            while (conv.good()) {
                conv >> animal;
            }

            for (int i = 0; i < animal.length(); i++) {
                animal[i] = tolower(animal[i]);
            }

            list[animal]++;
        }

        //sort(list.begin(), list.end());

        cout << "List " << lists << ":" << endl;
        for (auto & animal: list) {
            cout << animal.first << " | " << animal.second << endl; 
        }
    }

}