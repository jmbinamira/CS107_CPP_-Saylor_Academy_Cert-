//~Php 242/Hr. Avg. Base Hourly Rate
#include<iostream>
#include<string>
using namespace std;

void inputEmployeeDetails(string& theEmployee, float& theHoursWorked, float& thePayRate);
float calculatePay(float theHoursWorked, float thePayRate);
void printPaySlip(string theEmployee, float theHoursWorked, float thePayRate, float overtimeHours);

int main() {
    string theEmployee;
    float theHoursWorked, thePayRate, overtimeHours;

    for (int i = 0; i < 5; i++) {
        inputEmployeeDetails(theEmployee, theHoursWorked, thePayRate);
        printPaySlip(theEmployee, theHoursWorked, thePayRate, overtimeHours);
    }
    
    return 0;
}

void inputEmployeeDetails(string& theEmployee, float& theHoursWorked, float& thePayRate) {
    cout << "Employee Name: ";
    getline(cin, theEmployee);
    cout << "Hours Worked: ";
    cin >> theHoursWorked;
    cout << "Hourly Pay Rate (Php): ";
    cin >> thePayRate;
    cin.ignore();  //After reading the float values to clear the input buffer, fixing the bug of prematurely exiting after the first loop
}

float calculatePay(float theHoursWorked, float thePayRate, float& overtimeHours) {
    float pay;

    if (theHoursWorked > 40) {
        pay = 40 * thePayRate + (theHoursWorked - 40) * (thePayRate * 1.5);
        overtimeHours = theHoursWorked - 40;
    }
    else {
        pay = theHoursWorked * thePayRate;
        overtimeHours = 0;
    }

    return pay;
}

void printPaySlip(string theEmployee, float theHoursWorked, float thePayRate, float overtimeHours) {
    float pay = calculatePay(theHoursWorked, thePayRate, overtimeHours);

    cout << "Pay slip for " << theEmployee << ". Hours worked: " << theHoursWorked << ". Overtime hours: " << overtimeHours <<  ". Hourly pay rate (Php): " << thePayRate << ". Pay (Php): " << pay << endl;
}