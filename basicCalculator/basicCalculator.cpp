// basicCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    int mult, div, sub, add, num1, num2;

    //geting the input from the user
    cout << "Please enter the first number";
    cin >> num1;
    cout << "Please enter the second number";
    cin >> num2;

    //calculation
    add = num1 + num2;//addition of the two numbers
    div = num1 / num2;//division of the numbers
    sub = num1 - num2;//subtraction 
    mult = num1 * num2;//multiplication
    //output window
    cout << "The sum of " << num1 << " and " << num2 << " is " << add << endl;
    cout << "Multiply " << num1 << " by " << num2 << " is " << mult<< endl;
    cout << num1 << " subtract " << num2 << " is " << sub<< endl;
    cout  << num1 << " divided by " << num2 << " is " << div;

}


