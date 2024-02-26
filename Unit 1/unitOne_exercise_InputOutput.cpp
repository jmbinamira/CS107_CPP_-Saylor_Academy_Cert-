#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main() {
    //1. Convert Centigrade to Fahrenheit
    //Search the formulae for these conversions and just swap it with the prev exercise/s

    //2. Calculate the volume of a sphere
    //Look at exercise 14

    //3. Print the perimeter of a rectangle to take its height and width as input
    //Look at exercise 17

    //4. Convert kph to mph
    //Look at exercise 23

    //5. Calculate the total num of min using hours and min as input
    int hours, minutes, totalMinutes;
    cout << "Input hours: ";
    cin >> hours;
    cout << "Input minutes: ";
    cin >> minutes;

    totalMinutes = (hours * 60) + minutes;
    cout << "Total: " << totalMinutes << " minutes" << "\n" << endl;

    //6. Display the total num of hours and min using min at input
    int minutesB, totalHoursB, totalMinutesB;
    cout << "Input minutes: ";
    cin >> minutesB;

    totalHoursB = (minutesB / 60);
    totalMinutesB = (minutesB % 60);
    cout << totalHoursB << " Hours " << totalMinutesB << " Minutes" << "\n" << endl;

    //7. Reads a fore, surname, year of birth, and display them one after another
    string firstName, lastName;
    int birthYear;
    cout << "Input your first name: ";
    getline(cin, firstName);
    cout << "Input your last name: ";
    getline(cin, lastName);
    cout << "Input your birth year: ";
    cin >> birthYear;
    cout << firstName << " " << lastName << " " << birthYear << "\n" << endl;

    //8. Find the sum of 3 num with getting input in one line seperated by a comma
    string line;
    int num1, num2, num3, sum;
    cout << "Input 3 numbers separated by a comma: ";
    getline(cin, line);
    istringstream iss(line);
    
    int numScan;
    char comma;
    vector<int> numContainer;
    while (iss >> numScan) {
        numContainer.push_back(numScan);
        iss >> comma;
    }

    for (int i = 0; i < numContainer.size(); i++) {
        sum += numContainer[i];
    }

    cout << "Sum of the 3 numbers: " << sum << "\n" << endl;

    //9. Perform +, -, *, / of 2 num
    string linee;
    int numOne, numTwo, sumTwo = 0, difference = 0, product = 1, quotient = 0;
    cout << "Input 2 numbers separated by a comma: ";
    getline(cin, linee);
    istringstream iss(linee);
    
    int numScann;
    char commaa;
    vector<int> numContainerr;
    while (iss >> numScann) {
        numContainerr.push_back(numScann);
        iss >> commaa;
    }

    sumTwo = numContainerr[0] + numContainerr[1];
    difference = numContainerr[0] - numContainerr[1];
    product = numContainerr[0] * numContainerr[1];
    quotient = numContainerr[0] / numContainerr[1];

    cout << "Sum of the 2 numbers: " << sumTwo << endl;
    cout << "Difference of the 2 numbers: " << difference << endl;
    cout << "Product of the 2 numbers: " << product << endl;
    cout << "Quotient of the 2 numbers: " << quotient << "\n" << endl;

    //10. Find the 3rd angle of a triangle with 2 angles are given
    string lineee;
    int firstAngle, secondAngle, thirdAngle;
    cout << "Input 2 angles separated by a comma: ";
    getline(cin, lineee);
    istringstream iss(lineee);
    
    int numScannn;
    char commaaa;
    vector<int> numContainerrr;
    while (iss >> numScannn) {
        numContainerrr.push_back(numScannn);
        iss >> commaaa;
    }

    thirdAngle = 180 - (numContainerrr[0] + numContainerrr[1]);
    
    cout << "Third angle: " << thirdAngle << "\n" << endl;

    return 0;
}