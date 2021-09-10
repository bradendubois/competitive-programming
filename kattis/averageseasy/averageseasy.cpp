#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {

        int N_CS, N_E;
        cin >> N_CS >> N_E;

        vector<int> CS(N_CS);

        double cs_avg = 0;
        for (auto & in : CS) {
            cin >> in;
            cs_avg += in;
        } cs_avg /= (double) N_CS;

        double e_avg = 0;
        long in = 0;
        for (int i = 0; i < N_E; i++) {
            cin >> in;
            e_avg += in;
        } e_avg /= (double) N_E;
    
        int students = 0;
        double new_cs, new_e;

        for (auto & cs_average : CS) {            
            new_cs = ((cs_avg * N_CS) - cs_average) / (N_CS - 1);
            new_e = e_avg + ((cs_average - e_avg) / N_E);
            
            if (new_cs > cs_avg && new_e > e_avg) 
                students++;
        } cout << students << endl;
    }
}