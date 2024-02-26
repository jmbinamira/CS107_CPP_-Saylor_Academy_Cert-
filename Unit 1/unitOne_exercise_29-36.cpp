#include<iostream>
#include<iomanip>  //Needed for #31 and #36
#include <ctime>  //Needed for #34
using namespace std;

int main() {
    //29. Compute quotient and remainder
    int dividend, divisor, quotient, remainder;
    cout << "Input dividend: ";
    cin >> dividend;
    cout << "Input divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "The quotient is " << quotient << " while the remainder is " << remainder << "\n" << endl;
    
    //30. Compute the total and avg of 4 numbers
    float numOne, numTwo, numThree, numFour, sum, avg;
    cout << "Input 2 numbers separated by a space: ";
    cin >> numOne >> numTwo;
    cout << "Input 2 numbers separated by a space: ";
    cin >> numThree >> numFour;

    sum = numOne + numTwo + numThree + numFour;
    avg = sum / 4;

    cout << "Total is " << sum << ". While the avg is " << avg << "\n" << endl;

    //31. Input a single digit num and print a rectangle form of 4 columns and 6 rows
    int inputPrintRect;
    cout << "Input the number: ";
    cin >> inputPrintRect;
    
    cout << " " << inputPrintRect << inputPrintRect << inputPrintRect << inputPrintRect << endl;
    cout<<" " << inputPrintRect << " " << " " << inputPrintRect <<endl;
    cout<<" " << inputPrintRect << " " << " " << inputPrintRect <<endl;
    cout<<" " << inputPrintRect << " " << " " << inputPrintRect << endl;
    cout<<" " << inputPrintRect << " " << " " << inputPrintRect << endl;        
    cout<<" " << inputPrintRect << inputPrintRect << inputPrintRect << inputPrintRect << "\n" << endl;     

    //32. Check whether a number is +, -, or 0
    int inputCheck;
    cout << "Input a number: ";
    cin >> inputCheck;

    if (inputCheck > 0) {
        cout << "Entered num is +" << "\n" << endl;
    }
    else if (inputCheck < 0) {
        cout << "Entered num is -" << "\n" << endl;
    }
    else {
        cout << "Entered num is 0" << "\n" << endl;
    }

    //33. Divide 2 num and print on screen
    //Look at exercise 29. Same problem just without the remainder

    //34. Display the current date and time
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);

    cout << " sec = " << (tPtr->tm_sec) << endl;
    cout << " min = " << (tPtr->tm_min) << endl;
    cout << " hours = " << (tPtr->tm_hour) << endl;
    cout << " day of month = " << (tPtr->tm_mday) << endl;
    cout << " month of year = " << (tPtr->tm_mon)+1 << endl;
    cout << " year = " << (tPtr->tm_year)+1900 << endl;
    cout << " weekday = " << (tPtr->tm_wday ) << endl;
    cout << " day of year = " << (tPtr->tm_yday ) << endl;
    cout << " daylight savings = " <<(tPtr->tm_isdst ) << "\n" << endl;

    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
    cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << "\n" << endl;

    //35. Compute the specified expressions and print the output
    float ans;
    ans = (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5);
    cout << "Result of the expression is: " << ans;

    //36. Test the type casting
    cout << fixed << setprecision(1);
    cout<<"Test explicit type casting :\n";
    int i1 = 4, i2 = 8;
    cout << i1 / i2 << endl;  //4/8. int to double
    cout << (double)i1 / i2 << endl; 
    cout << i1 / (double)i2 << endl;  
    cout << (double)(i1 / i2) << endl;
    
    double d1 = 5.5, d2 = 6.6;
    cout<<"\nTest implicit type casting :\n" ;  
    cout << (int)d1 / i2 << endl;  //5.5/6.6. double to int
    cout << (int)(d1 / i2) << endl;   

    cout << "\nint implicitly casts to double: \n";
    d1 = i1;    
    cout << d1 << endl;  //4.0. int to double

    cout <<"double truncates to int!: \n";
    i2 = d2;            
    cout << i2 << endl;  //6. double to int
    
    return 0;
}