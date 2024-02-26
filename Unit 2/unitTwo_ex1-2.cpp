#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void addition(int a, int b, int& c);

int main() {
    int type, a, b, c;
    cout << "Type of Calculation: \n1 - Division    2 - Addition    3 - Subtraction    4 - Multiplication    5 - Modulo    6 - Power" << endl;
    cin >> type;

    switch(type) {
        case 1:
            cout << "Division \nEnter two numbers (separated by a space): ";
            cin >> a >> b;
            c = a/b;
            cout << a << "/" << b << " = " << c;
            break; 
        case 2:
            cout << "Addition \nEnter two numbers (separated by a space): ";
            cin >> a >> b;
            addition(a, b, c);
            break; 
        case 3:
            cout << "Subtraction \nEnter two numbers (separated by a space): ";
            cin >> a >> b;
            c = a-b;
            cout << a << "-" << b << " = " << c;
            break; 
        case 4:
            cout << "Multiplication \nEnter two numbers (separated by a space): ";
            cin >> a >> b;
            c = a*b;
            cout << a << "*" << b << " = " << c;
            break; 
        case 5:
            cout << "Modulo \nEnter two numbers (separated by a space): ";
            cin >> a >> b;
            c = a%b;
            cout << a << "%" << b << " = " << c;
            break; 
        case 6:
            cout << "Power \nEnter two numbers (separated by a space): ";
            cin >> a >> b;
            c = pow(a,b);
            cout << a << "^" << b << " = " << c;
            break; 
        default:
            cout << "Invalid input";
    }    

    return 0;
}

void addition(int a, int b, int& c) {
    c = a+b;
    cout << a << "+" << b << " = " << c;
}