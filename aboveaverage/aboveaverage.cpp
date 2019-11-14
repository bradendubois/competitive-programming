#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Number of test cases to process
    int cases;
    cin >> cases;

    // Loop through each test case
    for (int i = 0; i < cases; i++) {

        // The first number is the size of the class
        int classSize;
        cin >> classSize;

        // Running total of marks for this case
        int total = 0;

        // Array representing all the students
        int marks [classSize];

        // Go through all the marks
        for (int j = 0; j < classSize; j++) {
            
            int mark;
            cin >> mark;
            
            // Save this mark in the array, and add it to the running total
            marks[j] = mark;
            total += mark;
        }

        // Set the precision to 3 digits as per the question spec
        cout << setprecision(3) << fixed;

        // Calculate the average
        float average = total / classSize;
        

        int studentsAboveAverage = 0;

        // Count all marks above the average
        for (int j = 0; j < classSize; j++) {
            if (marks[j] > average) {
                studentsAboveAverage++;
            }
        }
        
        // Need to do some casting to floats, and scale by 100 to get percentage rather than ratio.
        float percentAboveAverage = ((float) studentsAboveAverage / (float) classSize) * 100; 

        // Output
        cout << percentAboveAverage << "%"<< endl;

    }
    
    return 0;
}