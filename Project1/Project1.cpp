// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    while (true) {
        double num;
        double num2;
        char op;
        cout << "Enter a number\n";
        cin >> num;
        cout << "Enter an operator: +, -, /, *\n";
        cin >> op;

        while (op != '+' && op != '-' && op != '/' && op != '*') {
            cout << "That is not a valid operator. Please try again.\n";
            cin >> op;
        }

        double result;

        cout << "Enter a second number\n";
        cin >> num2;

        switch (op) {
        case '+':
            result = num + num2;
            cout << result << endl;
            break;
        case '-':
            result = num - num2;
            cout << result << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Cannot divide by zero." << endl;
                break;
            }
            result = num / num2;
            cout << result << endl;
            break;
        case '*':
            result = num * num2;
            cout << result << endl;
            break;
        }

        char input;
        cout << "Would you like to calculate something else? Y or N\n";
        cin >> input;

        while (input != 'Y' && input != 'N') {
            cout << "That is not a valid input. Please try again.";
            cin >> input;
        }

        if (input == 'Y') {
            continue;
        }
        else if (input == 'N') {
            cout << "See ya!" << endl;
            break;
        }
    }



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
