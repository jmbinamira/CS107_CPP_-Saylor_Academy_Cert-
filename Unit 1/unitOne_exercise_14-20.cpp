#include<iostream>
#include<cmath>
using namespace std;


int main() {
    //14. Calculate the volume of a sphere
    int sphereRadius = 0;
    cout << "Input radius of a sphere: ";
    cin >> sphereRadius;

    double sphereVolume, pi = 3.14;
    sphereVolume = ((4 * pi * pow(sphereRadius, 3)) / 3);
    cout << "The volume of the sphere is: " << sphereVolume << "\n" << endl;

    //15. Calculate the volume of a cube
    int sides = 0, cubeVolume = 0;
    cout << "Input the side of a cube: ";
    cin >> sides;

    cubeVolume = pow(sides, 3);
    cout << "The volume of the cube is: " << cubeVolume << "\n" << endl;

    //16. Calculate the volume of a cylinder
    int cylinderRadius = 0, cylinderHeight = 0;
    cout << "Input the radius of a cylinder: ";
    cin >> cylinderRadius;
    cout << "Input the height of a cylinder: ";
    cin >> cylinderHeight;

    double cylinderVolume = 0;
    cylinderVolume = pi * pow(cylinderRadius, 2) * cylinderHeight;

    cout << "The volume of the cylinder is : " << cylinderVolume << "\n" << endl;

    //17. Find the area and perimeter of a rectangle
    int recLength = 0, recWidth = 0;
    cout << "Input the length of a rectangle: ";
    cin >> recLength;
    cout << "Input the width of a rectangle: ";
    cin >> recWidth;

    double recArea = 0, recPerimeter = 0;
    recArea = recLength * recWidth;
    recPerimeter = 2 * (recLength + recWidth);
    cout << "The area of the rectangle is: " << recArea << endl;
    cout << "The perimeter of the rectangle is: " << recPerimeter << "\n" << endl;

    //18. Find the area of any triangle using Heron's Formula
    double side1, side2, side3, s, triangleArea;
    cout << "1st side: ";
    cin >> side1;
    cout << "2nd side: ";
    cin >> side2;
    cout << "3rd side: ";
    cin >> side3;

    s = (side1 + side2 + side3) / 2;
    triangleArea = sqrt(s*(s - side1)*(s - side2)*(s - side3));
    cout << "The area of the triangle is: " << triangleArea  << "\n" << endl;

    //19. Find the area and circumference of a circle
    //Look at GitHub OOP/CalculateCircle.cpp
    
    //20. Convert temp in Celsius to Fahrenheit 
    //Look at GitHub CodeAbbey/Fahrenheit_To_Celsius.cpp

    return 0;
}