
// change_calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int amount = 0;
    
    int dollarvalue = 100;  // 1dollar =100 cents

    int quartervalue = 25;  // 1 quarter = 25 cents

    int dimevalue = 10;   // 1 dime = 10 cents

    int nickelvalue = 5;  // 1 nickel = 5 cents

    int pennyvalue = 1;   // 1 penny = 1 cent

    int balance = 0;  // this is going to be the cumulative number to be carried forward for each operation

    int dollars = 0;

    int quarters = 0;

    int dimes = 0;

    int nickels = 0;

    int pennies = 0;

    std::cout << "Enter the amount that you want to convert (in cents)  :";

    cin >> amount;

    dollars = amount / dollarvalue;

    balance = amount - (dollars * dollarvalue);

    quarters = (balance / quartervalue);

    balance = balance - (quarters * quartervalue);

    dimes = (balance / dimevalue);

    balance = balance - (dimes * dimevalue);

    nickels = (balance / nickelvalue);

    balance = balance - (nickels * nickelvalue);

    pennies = balance;

    cout << "The amount of change you have to give is  :" << endl;

    cout << dollars << " dollars" << endl;

    cout << quarters << " quarters" << endl;

    cout << dimes << " dimes" << endl;

    cout << nickels << " nickels" << endl;

    cout << pennies << " pennies" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
