#include<iostream>
#include<climits>  //For #5. To find int limits
using namespace std;

int main() {
    //1. Print a welcome text in a seperate line.
    cout << endl << "Welcome !!! >.<\n" << endl;  

    //2. Print the sum of 2 numbers.
    cout << "The sum of 29 and 30 is : " << 29 + 30 << "\n" << endl;

    //3. Find the size of fundamental data types.  
    cout << "The sizeof(char) is : " << sizeof(char) << " bytes" << endl;
    cout << "The sizeof(short) is : " << sizeof(short) << " bytes" << endl;
    cout << "The sizeof(int) is : " << sizeof(int) << " bytes" << endl;
    cout << "The sizeof(long) is : " << sizeof(long) << " bytes" << endl;
    cout << "The sizeof(long long) is : " << sizeof(long long) << " bytes" << endl;
    cout << "The sizeof(float) is : " << sizeof(float) << " bytes" << endl;
    cout << "The sizeof(double) is : " << sizeof(double) << " bytes" << endl;
    cout << "The sizeof(long double) is : " << sizeof(long double) << " bytes" << endl;
    cout << "The sizeof(bool) is : " << sizeof(bool) << " bytes\n" << endl;

    //4. Print the sum of 2 numbers using variables.
    int a = 29, b = 30, sum = 0;
    sum = a + b;
    cout << "The sum of " << a << " and " << b << " is : " << sum << "\n" << endl;

    //5. Check the upper & lower limits of an int.
    cout << "The max limit of int data type: " << INT_MAX << endl;
    cout << "The min limit of int data type: " << INT_MIN << endl;
    cout << "The max limit of unsigned int data type: " << UINT_MAX << endl;
    cout << "The max limit of long long data type: " << LLONG_MAX << endl;
    cout << "The min limit of long long data type: " << LLONG_MIN << endl;
    cout << "The max limit of unsigned long long data type: " << ULLONG_MAX << endl;
    cout << "The Bits contain in char data type: " << CHAR_BIT << endl;
    cout << "The max limit of char data type: " << CHAR_MAX << endl;
    cout << "The min limit of char data type: " << CHAR_MIN << endl;
    cout << "The max limit of signed char data type: " << SCHAR_MAX << endl;
    cout << "The min limit of signed char data type: " << SCHAR_MIN << endl;
    cout << "The max limit of unsigned char data type: " << UCHAR_MAX << endl;
    cout << "The min limit of short data type: " << SHRT_MIN << endl;
    cout << "The max limit of short data type: " << SHRT_MAX << endl;
    cout << "The max limit of unsigned short data type: " << USHRT_MAX << "\n" << endl;

    //6. Check whether the primitive values crossing the limits or not.
    char gender = 'F';
    cout << "The gender is: " << gender << endl;
    bool married = 1;
    cout << "Is she married? : " << married << endl;
    unsigned short numOfSons = 2;
    cout << "Number of sons she has : " << numOfSons << endl;
    short yearOfAppointment = 2009; 
    cout << "Year of her appointment : " << yearOfAppointment << endl;
    unsigned int yearlyPackage = 1500000;
    cout << "Salary for a year : " << yearOfAppointment << endl;
    double height = 79.48;
    cout << "Height is : " << height << endl;
    float gpa = 4.69f; //'f' suffix for float
    cout << "GPA is : " << gpa << endl;
    long totalDrawnUpTo = 12047235L; //'L' suffix for long
    cout << "Salary drawn up to : " << totalDrawnUpTo << endl;
    long long balance = 995324987LL; //'LL' suffix for long long int
    cout << "Balance till : " << balance << endl;

    return 0;
}