#include<iostream>
#include<string>
using namespace std;

string getName();
void getHours();

int main() {
    getHours();

    return 0;
}

string getName() {
    string firstName, lastName, fullName;
    cout << "First name: ";
    getline(cin, firstName);
    cout << "Last name: ";
    getline(cin, lastName);

    fullName = firstName + " " + lastName;
    return fullName;
}

void getHours() {
    string fullName = getName();
    int mon, tues, wed, thurs, fri, totalHours;
    float weeklyPay;

    cout << "Hours worked for each day of the week (separated by a space): ";
    cin >> mon >> tues >> wed >> thurs >> fri;

    totalHours = mon + tues + wed + thurs + fri;
    if (totalHours > 40) {
        weeklyPay = (totalHours - 40) * 0.1;
        cout << fullName << " will receive a " << weeklyPay << " % bonus.";
    }
    else if (totalHours < 40) {
        weeklyPay = (40 - totalHours) * 0.1;
        cout << fullName << " will receive a " << weeklyPay << " % less pay.";
    }
    else {
        cout << fullName << " will receive no bonus.";
    }
}