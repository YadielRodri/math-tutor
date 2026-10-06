/*
Description: This program asks for two numbers and does one math operation.
Project Name: Math Tutor Group Project
Programmers: Yadiel Rodriguez De La Cruz, Peterson Valentin,
             Balqis A. Said, and Stephen Patrick Flynn
Date: October 4, 2026
*/

#include <iostream>
using namespace std;

int main()
{
    double firstNumber;
    double secondNumber;
    int remainderResult;
    char mathOperator = ' ';

    cout << "==================================================\n"
         << "                  MATH TUTOR\n"
         << " Description: Performs five math operations\n"
         << " Project Name: Math Tutor Group Project\n"
         << " Programmers: Yadiel Rodriguez De La Cruz,\n"
         << " Peterson Valentin, Balqis A. Said, and\n"
         << " Stephen Patrick Flynn\n"
         << " Date: October 4, 2026\n"
         << "==================================================\n\n"
         << "+ Addition\n"
         << "- Subtraction\n"
         << "* Multiplication\n"
         << "/ Division\n"
         << "% Remainder\n\n";

    cout << "Enter operator: ";
    cin >> mathOperator;

    if (cin.peek() != '\n' ||
        (mathOperator != '+' && mathOperator != '-' &&
         mathOperator != '*' && mathOperator != '/' &&
         mathOperator != '%'))
    {
        cout << "Invalid operator.\n";
        return 0;
    }

    cin.ignore(10, '\n');

    cout << (mathOperator == '%' ? "Enter first whole number: " : "Enter first number: ");

    if ((cin.peek() >= '0' && cin.peek() <= '9') ||
        cin.peek() == '-' || cin.peek() == '+' || cin.peek() == '.')
    {
        cin >> firstNumber;
    }
    else
    {
        cout << "Invalid number.\n";
        return 0;
    }

    if (cin.peek() != '\n')
    {
        cout << "Invalid number.\n";
        return 0;
    }

    cin.ignore(10, '\n');

    cout << (mathOperator == '%' ? "Enter second whole number: "
                                : "Enter second number: ");

    if ((cin.peek() >= '0' && cin.peek() <= '9') ||
        cin.peek() == '-' || cin.peek() == '+' || cin.peek() == '.')
    {
        cin >> secondNumber;
    }
    else
    {
        cout << "Invalid number.\n";
        return 0;
    }

    if (cin.peek() != '\n')
    {
        cout << "Invalid number.\n";
        return 0;
    }

    if (mathOperator == '+')
    {
        cout << "Result: " << firstNumber + secondNumber << endl;
    }
    else if (mathOperator == '-')
    {
        cout << "Result: " << firstNumber - secondNumber << endl;
    }
    else if (mathOperator == '*')
    {
        cout << "Result: " << firstNumber * secondNumber << endl;
    }
    else if (mathOperator == '/')
    {
        if (secondNumber == 0)
        {
            cout << "Cannot divide by zero.\n";
        }
        else
        {
            cout << "Result: " << firstNumber / secondNumber << endl;
        }
    }
    else
    {
        if (secondNumber == 0)
        {
            cout << "Cannot calculate remainder with zero.\n";
        }
        else if (firstNumber != static_cast<int>(firstNumber) ||
                 secondNumber != static_cast<int>(secondNumber))
        {
            cout << "Remainder requires whole numbers.\n";
        }
        else
        {
            remainderResult = static_cast<int>(firstNumber) %
                              static_cast<int>(secondNumber);
            cout << "Result: " << remainderResult << endl;
        }
    }

    return 0;
}
