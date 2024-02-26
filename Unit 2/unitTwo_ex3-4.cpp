#include <iostream>
using namespace std;

int fibonacciIndex(int fibNum, int a = 0, int b = 1, int fibIndex = 0) {
    if (fibNum == 0 || fibNum == 1) {
        return fibNum;
    } else if (a + b > fibNum) {
        return fibIndex;
    } else {
        return fibonacciIndex(fibNum, b, a + b, fibIndex + 1);
    }
}

int main() {
    int fibNum = 144;
    int fibIndex = fibonacciIndex(fibNum);
    cout << fibIndex << endl;

    return 0;
}

//For exercise 4, at GitHub CodeAbbey/Fibonacci_Sequence.cpp