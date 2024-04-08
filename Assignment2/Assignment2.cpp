/*
Ishan Banga
100885007
Assignment 2
*/
/*
This program reads the input from the file and just displays the result on the output.
*/

/* remove this line before executing the code 

#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;
const int reviewer = 4;
const int score = 5;

double calculateAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    int Id;
    ifstream file("data.txt");
    if (file.fail()) {
        cout << "Failed to Load";
        return 1;
    }
 
    while (true) {
        file >> Id;
        if (file.eof()) {
            break;
        }
        int ReviewForm[reviewer][score];
        for (int i = 0; i < reviewer; i++) {
            for (int j = 0; j < score; j++ ) {
                file >> ReviewForm[i][j];
            }
        }
        
        bool allReviewersAbove5 = true;
        for (int i = 0; i < reviewer; i++) {
            double rowav = calculateAverage(ReviewForm[i], score);
            if (rowav < 5) {
                allReviewersAbove5 = false;
                break; // Exit loop early if any row average is below 5
            }
        }
        double overallav = 0;
        for (int i = 0; i < reviewer; i++) {
            overallav += calculateAverage(ReviewForm[i], score);
        }
        overallav /= reviewer;

        if (allReviewersAbove5) {
            if (overallav >= 7) {
                cout << Id << " Accepted" << endl;
            }
            else {
                cout << Id << " Borderline" << endl;
            }
        }
        else {
            cout << Id << " Rejected" << endl;
        }
    }

    file.close();
    return 0;
}

 //Remove the line before executing the code*/