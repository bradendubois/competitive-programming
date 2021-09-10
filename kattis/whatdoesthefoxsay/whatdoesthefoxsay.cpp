#include <iostream>
#include <map>
#include <vector>
#include <string.h>
#include <sstream>

using namespace std;

int main() {
    int T;
    cin >> T;

    string queston = "what does the fox say?";

    string line; // Ignore T
    getline(cin, line);

    while (T--) {
        map<string, bool> nonfox;
        vector<string> fox;

        // Fox recording
        string animal;
        getline(cin, animal);
        stringstream conv(animal);
        while (conv.good()) {
            string noise;
            conv >> noise;
            fox.push_back(noise);
        }

        while (getline(cin, animal) && strcmp(animal.c_str(), queston.c_str()) != 0) {
            string noise;
            stringstream convert(animal);
            convert >> noise; // Ignore first two
            convert >> noise;
            convert >> noise;

            nonfox[noise] = true;
        }

        for (auto noise : fox) {
            if (!nonfox[noise]) cout << noise << " ";
        } cout << endl;
    }
}