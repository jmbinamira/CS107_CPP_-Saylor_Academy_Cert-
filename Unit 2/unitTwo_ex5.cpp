#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void userInput(int& a, int& b);
void division(int a, int b, int& c);
void addition(int a, int b, int& c);
void subtraction(int a, int b, int& c);
void multiplication(int a, int b, int& c);
void modulo(int a, int b, int& c);
void power(int a, int b, int& c);

int main() {
    int type, a, b, c;
    cout << "Type of Calculation: \n1 - Division    2 - Addition    3 - Subtraction    4 - Multiplication    5 - Modulo    6 - Power" << endl;
    cin >> type;

    switch(type) {
        case 1:  
            userInput(a, b);
            division(a, b, c);
            break; 
        case 2:
            userInput(a, b);
            addition(a, b, c);
            break; 
        case 3:
            userInput(a, b);
            subtraction(a, b, c);
            break; 
        case 4:
            userInput(a, b);
            multiplication(a, b, c);
            break; 
        case 5:
            userInput(a, b);
            modulo(a, b, c);
            break; 
        case 6:
            userInput(a, b);
            power(a, b, c);
            break; 
        default:
            cout << "Invalid input";
    }    

    return 0;
}

void userInput(int& a, int& b) {
    cout << "Enter two numbers (separated by a space): ";
    cin >> a >> b;
}

void division(int a, int b, int& c) {
    c = a/b;
    cout << a << "/" << b << " = " << c;
}

void addition(int a, int b, int& c) {
    c = a+b;
    cout << a << "+" << b << " = " << c;
}

void subtraction(int a, int b, int& c) {
    c = a-b;
    cout << a << "-" << b << " = " << c;
}

void multiplication(int a, int b, int& c) {
    c = a*b;
    cout << a << "*" << b << " = " << c;
}

void modulo(int a, int b, int& c) {
    c = a%b;
    cout << a << "%" << b << " = " << c;
}

void power(int a, int b, int& c) {
    c = pow(a,b);
    cout << a << "^" << b << " = " << c;
}