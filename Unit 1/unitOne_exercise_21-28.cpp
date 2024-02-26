#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;

int main() {
    //21. Fahrenheit to Celsius
    int inputF, convertedC;
    cout << "Input temp. in Fahrenheit: ";
    cin >> inputF;

    convertedC = (inputF - 32) * 5/9;
    cout << "Input temp. in Celsius is: " << convertedC << "\n" << endl;

    //22. Find the third angle of a triangle
    int firstAngle, secondAngle, thirdAngle; 
    cout << "Input 1st angle: ";
    cin >> firstAngle;
    cout << "Input 2nd angle: ";
    cin >> secondAngle;

    thirdAngle = firstAngle + secondAngle;
    cout << "The 3rd angle is: " << thirdAngle << "\n" << endl;

    //23. Convert km/h to miles per hour.
    float kmh, mph;
    cout << "Input the distance in kilometer: ";
    cin >> kmh;

    mph = kmh / 1.609344;
    cout << kmh << " Km./hr means " << mph << " Miles/hr." << "\n" << endl;

    //24. Convert temp in Kelvin to Fahrenheit
    float inputK, convertedF;
    cout << "Input temp. in Kelvin: ";
    cin >> inputK;

    convertedF = 1.8 * (inputK - 273.15) + 32;
    cout << "Input temp. in Fahrenheit is: " << convertedF << "\n" << endl;

    //25. Convert temp in Kelvin to Celsius
    float inputK, convertedC;
    cout << "Input temp. in Kelvin: ";
    cin >> inputK;

    convertedC = inputK - 273.15;
    cout << "Input temp. in Celsius is: " << convertedC << "\n" << endl;

    //26. Convert temp in Fahrenheit to Kelvin
    //27. Convert temp. in Celsius to Kelvin
    //Search the formulae for these conversions and just swap it with the prev exercise/s

    //28. Find the area of a scalene triangle
    double side1, side2, angle, triangleArea;
    cout << "1st side: ";
    cin >> side1;
    cout << "2nd side: ";
    cin >> side2;
    cout << "Angle: ";
    cin >> angle;
    
    triangleArea = (side1*side2*sin((PI/180)*angle))/2;
    cout << "The area of a scalene triangle is: " << triangleArea  << "\n" << endl;

    return 0;
}