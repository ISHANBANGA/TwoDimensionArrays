/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int reviewer = 4;
const int score = 5;

// Function to calculate the average of an array
double calculateAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    cout << "Paper ID Decision\n";

    string line;
    while (getline(cin, line)) {
        if (line.empty()) // Skip empty lines
            continue;

        istringstream iss(line);
        string paperID;
        iss >> paperID;
        if (paperID == "ID") // Skip header line
            continue;

        int ReviewForm[reviewer][score];

        // Read scores for each reviewer from the line
        for (int i = 0; i < reviewer; i++) {
            for (int j = 0; j < score; j++) {
                cin >> ReviewForm[i][j];
            }
        }

        // Check if individual reviewer averages are above 5
        bool individualAcceptance = true;
        for (int i = 0; i < reviewer; i++) {
            double avg = calculateAverage(ReviewForm[i], score);
            if (avg < 5) {
                individualAcceptance = false;
                break;
            }
        }

        // Check each paper's acceptance status
        double overallAverage = 0;
        for (int i = 0; i < reviewer; i++) {
            overallAverage += calculateAverage(ReviewForm[i], score);
        }
        overallAverage /= reviewer;

        // Decision making
        string decision;
        if (individualAcceptance && overallAverage >= 7) {
            decision = "Accepted";
        }
        else if (overallAverage >= 5 && overallAverage < 7) {
            decision = "Borderline";
        }
        else {
            decision = "Declined";
        }

        // Output the result to the console
        cout << paperID << " " << decision << "\n";
    }

    return 0;
}
*/