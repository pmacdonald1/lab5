/**
 * @file Lab5_pmacdonald1.cpp
 * @author Phillip Macdonald
 * @date 2026-5-10
 * @brief A program to output a multiplication table when the user inputs a max number
 */
#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

void printInputValidationError()
{
    cout << "Error: The max digit must be greater than 4 and less than 10. " << "Please try again." << endl;
}

bool isMaxDigitInputValid(int input)
{
    return input > 4 && input < 10;
}

int getMaxDigitInput()
{
    int maxDigit;

    cout << "Please enter the maximum digit for the multiplication table." << endl;
    cout << "The digit must be greater than 4 and less than 10" << endl;
    cout << "Max Digit: ";
    cin >> maxDigit;

    while (!isMaxDigitInputValid(maxDigit))
    {
        printInputValidationError();

        cout << "Max Digit: ";
        cin >> maxDigit;
    }

    return maxDigit;
}

void printMultiplicationTable(int maxDigit)
{
    for (int rows = 1; rows <= maxDigit; rows++)
    {
        for (int columns = 1; columns <= maxDigit; columns++)
        {
            cout << columns * rows << '\t' << '\t';
        }

        cout << endl;
    }
}

int main()
{
    int maxDigit;

    maxDigit = getMaxDigitInput();

    printMultiplicationTable(maxDigit);

    return 0;
}