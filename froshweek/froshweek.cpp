#include <iostream>
#include <vector>

using namespace std;

long swaps = 0;

void mergeSort(vector<int> & sort, int l, int r) {

    if (l < r) {

        int m = l+(r-l) / 2;
        
        mergeSort(sort, l, m);
        mergeSort(sort, m+1, r);

        int leftSize = m-l+1, rightSize = r-m;

        // Copy the halves of the array
        int leftSubarray [leftSize], rightSubarray [rightSize];
        for (int i = 0; i < leftSize; i++) leftSubarray[i] = sort[l+i];
        for (int i = 0; i < rightSize; i++) rightSubarray[i] = sort[m+1+i];

        int i = 0, j = 0, k = l;
        while(i < leftSize && j < rightSize) {
            if (leftSubarray[i] < rightSubarray[j]) {
                sort[k] = leftSubarray[i];
                i++;
            } else {
                swaps += leftSize-i;
                sort[k] = rightSubarray[j];
                j++;
            } k++;
        }
   
        while(i < leftSize) {       //extra element in left array
            sort[k] = leftSubarray[i];
            i++; 
            k++;
        }

        while(j < rightSize) {     //extra element in right array
            sort[k] = rightSubarray[j];
            j++; 
            k++;
        }
    }
}

int main() {

    int n, in;
    cin >> n;

    vector<int> sort;

    while (n--) {
        cin >> in;
        sort.push_back(in);
    }

    mergeSort(sort, 0, sort.size()-1);

    cout << swaps << endl;
}