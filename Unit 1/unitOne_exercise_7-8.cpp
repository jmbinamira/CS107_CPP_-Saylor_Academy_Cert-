#include<iostream>
#include<iomanip>  //For #7. To display float with 1 dec place
using namespace std;

int main() {
    //7. Display various type or arithmetic operation using mixed data type.
    int a = 5, b = 7, intSum = 0;
    intSum = a + b;
    cout << a << " + " << b << " = " << intSum << endl;
    float c = 3.7f, d = 8.0f, floatSum = 0.0f;
    floatSum = c + d;
    cout << c << " + " << d << " = " << floatSum << endl;
    int e = 5;
    float f = 8.0f, typePromotionSum = 0.0f;
    typePromotionSum = e + f;
    cout << e << " + " << f << " = " << typePromotionSum << endl;

    int g = 5, h = 7, intDiff = 0;
    intDiff = g - h;
    cout << g << " - " << h << " = " << intDiff << endl;
    float i = 3.7f, j = 8.0f, floatDiff = 0.0f;
    floatDiff = i - j;
    cout << i << " - " << j << " = " << floatDiff << endl;
    int k = 5;
    float l = 8.0f, typePromotionDiff = 0.0f;
    typePromotionDiff = k - l;
    cout << k << " - " << l << " = " << typePromotionDiff << endl;

    int m = 5, n = 7, intProd = 0;
    intProd = m * n;
    cout << m << " * " << n << " = " << intProd << endl;
    float o = 3.7f, p = 8.0f, floatProd = 0.0f;
    floatProd = o * p;
    cout << o << " * " << p << " = " << floatProd << endl;
    int q = 5;
    float r = 8.0f, typePromotionProd = 0.0f;
    typePromotionProd = q * r;
    cout << q << " * " << r << " = " << typePromotionProd << endl;

    int s = 5, t = 7, intQuotient = 0;
    intProd = s / t;
    cout << s << " / " << t << " = " << intQuotient << endl;
    double u = 3.7, v = 8.0, doubleQuotient = 0.0;
    doubleQuotient = u / v;
    cout << u << " / " << v << " = " << doubleQuotient << endl;
    int w = 5;
    double x = 8.0, typePromotionQuotient = 0.0;
    typePromotionQuotient = w / x;
    cout << w << " / " << x << " = " << typePromotionQuotient << "\n" << endl;

    //8. Check overflow/underflow during various arithmetical operation
    cout << "Range of int is [-2147483648, 2147483647]"<< endl;
    int n1 = 2147483647;
    cout << "Overflow the int range and set in min range : " << n1 + 1 << endl; 
    cout << "Increasing from its min range : " << n1 + 2 << endl; 
    cout << "Product is : " << n1 * n1 << endl; 
    
    int n2 = -2147483648;
    cout << "Underflow the range and set in max range : " << n2 - 1 << endl; 
    cout << "Decreasing from its maxrange : " << n2 - 2 << endl; 
    cout << "Product is : " << n2 * n2 << endl; 

    return 0;
}