/*
Students & Pensioners Discount: Movie Ticket = 10%, Movie Ticket & Popcorns = 20%
x100 Others Discount: Movie Ticket = 0%, Movie Ticket & Popcorns = ??
*/
#include<iostream>
#include<string>
using namespace std;

void customerPensionerStudent();
void customerOther();

int main() {
    char userInput;
    int numberOfOrders;

    cout << "\nBase Price of Movie Tickets: Php 450  //  Movie Tickets w/ Popcorns: Php 600\n";
    cout << "Customer Type (P - Pensioner    S - Student    O - Other): ";
    cin >> userInput;
    userInput = tolower(userInput);

    if (userInput == 'p' || userInput == 's') {
        customerPensionerStudent();
    }
    else if (userInput == 'o') {
        customerOther();
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}

void customerPensionerStudent() {
    int userInput, numberOfOrders;
    float order;

    cout << "\nMovie Tickets (10% Off) - Press 1    Movie Tickets w/ Popcorns (20% Off) - Press 2: ";
    cin >> userInput;

    if (userInput == 1) {
        cout << "Number of Order/s: ";
        cin >> numberOfOrders;
        order = 450 * numberOfOrders * 0.1;
        cout << "Amount to pay (Php): " << order;
    }
    else if (userInput == 2) {
        cout << "Number of Order/s: ";
        cin >> numberOfOrders;
        order = 600 * numberOfOrders * 0.2;
        cout << "Amount to pay (Php): " << order;
    }

}

void customerOther() {
    int userInput, numberOfOrders;
    float order;

    cout << "\nMovie Tickets (0% Off) - Press 1    Movie Tickets w/ Popcorns (20% Off) - Press 2: ";
    cin >> userInput;

    if (userInput == 1) {
        cout << "Number of Order/s: ";
        cin >> numberOfOrders;
        order = 450 * numberOfOrders;
        cout << "Amount to pay (Php): " << order;
    }
    else if (userInput == 2) {
        cout << "Number of Order/s: ";
        cin >> numberOfOrders;
        order = 600 * numberOfOrders * 0.2;
        cout << "Amount to pay (Php): " << order;
    }
}