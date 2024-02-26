#include<iostream>
#include<iomanip>  //Needed to do formatted I/O
using namespace std;

int main() {
    //9. Display the operation of pre and post increment and decrement
    int num = 57;
    cout << "The number is : " << num << endl;

    num++;
    cout << "After post increment by 1: " << num << endl;
    ++num;
    cout << "After pre increment by 1: " << num << endl;
    num += 1;
    cout << "After increasing by 1: " << num << endl;

    num--;
    cout << "After post decrement by 1: " << num << endl;
    --num;
    cout << "After pre decrement by 1: " << num << endl;
    num -= 1;
    cout << "After decreasing by 1: " << num << "\n" << endl;

    //10. Write a program to formatting the output
    double pi = 3.14159265;
    cout << fixed << setprecision(4);  //Number is set to display with 4 dec places
    cout << "The value of pi : " << pi << endl;
    cout << "The value of pi 4 decimal place of total width 8: |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10: |" << setw(10) << pi << "|" << endl;

    cout << setfill('-');  //Fills the blanks with specified char
    cout << "The value of pi 4 decimal place of total width 8: |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10: |" << setw(10) << pi << "|" << endl;

    cout << scientific;  //Set value in scientific format with exponent
    cout << "The value of pi in scientific format is : " << pi << endl;

    bool status = false;
    cout << "Status in number: " << status << endl;
    cout << boolalpha;  //Set output to TRUE/FALSE instead of 1/0
    cout << "Status in alphabet: " << status << "\n" << endl;

    //11. Print the result of the specified operations
    cout << "1st expression is : " << (((20 % 9) * 10) + 3) << endl;
    cout << "1st expression is : " << ((35 + 5 ) % 7) << endl;
    cout << "1st expression is : " << (14 + -4 * 6 / 11) << endl;
    cout << "1st expression is : " << (2 + 15 / 6 * 1 - 7 % 2) << "\n" << endl;

    //12. Add 2 numbers that only accepts input from the user
    int a = 0, b= 0, sum = 0;
    cout << "Input 1st number: ";
    cin >> a;
    cout << "Input 2nd number: ";
    cin >> b;
    sum = a + b;
    cout << "The sum of both numbers is: " << sum << "\n" << endl;

    //13. Swap 2 numbers.
    int firstNum = 0, secondNum = 0, temp = 0;
    cout << "Input 1st number: ";
    cin >> firstNum;
    cout << "Input 2nd number: ";
    cin >> secondNum;  

    temp = firstNum;  
    firstNum = secondNum; 
    secondNum = temp;  

    cout << "After swapping, the 1st number is: " << firstNum << endl;
    cout << "After swapping, the 2nd number is: " << secondNum << endl;

    return 0;
}