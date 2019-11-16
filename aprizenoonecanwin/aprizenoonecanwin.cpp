#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    // Read in the first two values
    int forSale, targetPrice;
    cin >> forSale >> targetPrice;

    // Create array to store all the items
    int items [forSale];

    // Read in all the items
    for (int i = 0; i < forSale; i++) {
        cin >> items[i];
    }

    // Sort all the items (cheaper/lower at front)
    sort(items, items + forSale);

    // Can assume at least 1 item is for sale (need 2+ for the horn)
    int validItems = 1;

    // Loop over all the items
    for (int i = 1; i < forSale; i++) {

        /* Update total available items if these two most expensive 
         * (so far) items are still within the limit
         */
        if (items[i] + items[i-1] <= targetPrice) {
            validItems = i + 1;
        } else {
            break;
        }
    }

    cout << validItems << endl;
    return 0;
}