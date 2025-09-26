#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1. Basic Calculator\t\t2. Day of Week\n"
         << "3. Grade System\t\t\t4. Simple Menu\n"
         << "5. Number Type Checker\t\t6. Month Days\n"
         << "7. Vowel Checker\t\t8. Simple ATM\n"
         << "9. Traffic Light\t\t10. Number to Word\n"
         << "11. Simple Quiz\t\t\t12. Season Finder\n"
         << "13. Even/Odd Checker\t\t14. Calculator with Menu\n"
         << "15. Discount Calculator\t\t16. Weekday/Weekend\n"
         << "17. Simple Game Menu\t\t18. Temperature Converter\n"
         << "19. Simple Login System\t\t20. Number Comparison\n"
         << "21. Simple Alarm System\t\t22. Simple Banking\n"
         << "23. Number Sign\t\t\t24. Simple Direction\n"
         << "25. Final Grade Calculator\n";
    cout << "\n\nEnter program number (1-25): ";
    cin >> choice;
    system("cls");
    switch (choice)
    {
    case 1:
    {
        // Program 1: Basic Calculator
        double num1, num2;
        char op;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        switch (op)
        {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;
        default:
            cout << "Invalid operator!";
        }
        break;
    }

    case 2:
    {
        // Program 2: Day of Week
        int day;
        cout << "Enter day number (1-7): ";
        cin >> day;

        switch (day)
        {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day!";
        }
        break;
    }

    case 3:
    {
        // Program 3: Grade System
        int marks;
        cout << "Enter marks (0-100): ";
        cin >> marks;

        switch (marks / 10)
        {
        case 10:
        case 9:
            cout << "Grade: A";
            break;
        case 8:
            cout << "Grade: B";
            break;
        case 7:
            cout << "Grade: C";
            break;
        case 6:
            cout << "Grade: D";
            break;
        default:
            cout << "Grade: F";
        }
        break;
    }

    case 4:
    {
        // Program 4: Simple Menu
        cout << "Menu:\n1. Pizza\n2. Burger\n3. Pasta\n4. Salad\n";
        int choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You ordered Pizza - $10";
            break;
        case 2:
            cout << "You ordered Burger - $8";
            break;
        case 3:
            cout << "You ordered Pasta - $12";
            break;
        case 4:
            cout << "You ordered Salad - $6";
            break;
        default:
            cout << "Invalid choice!";
        }
        break;
    }

    case 5:
    {
        // Program 5: Number Type Checker
        int num;
        cout << "Enter a number: ";
        cin >> num;

        switch (num > 0)
        {
        case true:
            cout << "Positive number";
            break;
        default:
            switch (num < 0)
            {
            case true:
                cout << "Negative number";
                break;
            default:
                cout << "Zero";
            }
        }
        break;
    }

    case 6:
    {
        // Program 6: Month Days
        int month;
        cout << "Enter month number (1-12): ";
        cin >> month;

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days";
            break;
        case 2:
            cout << "28 or 29 days";
            break;
        default:
            cout << "Invalid month!";
        }
        break;
    }

    case 7:
    {
        // Program 7: Vowel Checker
        char ch;
        cout << "Enter a character: ";
        cin >> ch;

        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
        }
        break;
    }

    case 8:
    {
        // Program 8: Simple ATM
        int option;
        double balance = 1000;
        cout << "ATM Menu:\n1. Check Balance\n2. Withdraw\n3. Deposit\n";
        cout << "Enter choice (1-3): ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Balance: $" << balance;
            break;
        case 2:
        {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= balance)
            {
                balance -= amount;
                cout << "New balance: $" << balance;
            }
            else
            {
                cout << "Insufficient funds!";
            }
            break;
        }
        case 3:
        {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "New balance: $" << balance;
            break;
        }
        default:
            cout << "Invalid option!";
        }
        break;
    }

    case 9:
    {
        // Program 9: Traffic Light
        char light;
        cout << "Enter traffic light color (R/G/Y): ";
        cin >> light;

        switch (light)
        {
        case 'R':
        case 'r':
            cout << "STOP";
            break;
        case 'G':
        case 'g':
            cout << "GO";
            break;
        case 'Y':
        case 'y':
            cout << "SLOW DOWN";
            break;
        default:
            cout << "Invalid color!";
        }
        break;
    }

    case 10:
    {
        // Program 10: Number to Word (1-5)
        int num;
        cout << "Enter number (1-5): ";
        cin >> num;

        switch (num)
        {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        default:
            cout << "Number out of range!";
        }
        break;
    }

    case 11:
    {
        // Program 11: Simple Quiz
        int answer;
        cout << "What is 5 + 3?\n1. 7\n2. 8\n3. 9\nEnter choice: ";
        cin >> answer;

        switch (answer)
        {
        case 2:
            cout << "Correct!";
            break;
        default:
            cout << "Wrong! Answer is 8";
        }
        break;
    }

    case 12:
    {
        // Program 12: Season Finder
        int month;
        cout << "Enter month number (1-12): ";
        cin >> month;

        switch (month)
        {
        case 12:
        case 1:
        case 2:
            cout << "Winter";
            break;
        case 3:
        case 4:
        case 5:
            cout << "Spring";
            break;
        case 6:
        case 7:
        case 8:
            cout << "Summer";
            break;
        case 9:
        case 10:
        case 11:
            cout << "Fall";
            break;
        default:
            cout << "Invalid month!";
        }
        break;
    }

    case 13:
    {
        // Program 13: Even/Odd Checker
        int num;
        cout << "Enter a number: ";
        cin >> num;

        switch (num % 2)
        {
        case 0:
            cout << "Even number";
            break;
        case 1:
            cout << "Odd number";
            break;
        }
        break;
    }

    case 14:
    {
        // Program 14: Calculator with Menu
        double a, b;
        int op;
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
        cout << "Enter operation number: ";
        cin >> op;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (op)
        {
        case 1:
            cout << "Result: " << a + b;
            break;
        case 2:
            cout << "Result: " << a - b;
            break;
        case 3:
            cout << "Result: " << a * b;
            break;
        case 4:
            if (b != 0)
                cout << "Result: " << a / b;
            else
                cout << "Error: Division by zero!";
            break;
        default:
            cout << "Invalid operation!";
        }
        break;
    }

    case 15:
    {
        // Program 15: Simple Discount Calculator
        int amount;
        cout << "Enter purchase amount: ";
        cin >> amount;

        switch (amount >= 100)
        {
        case true:
            cout << "Discount: 10%\n";
            cout << "Final amount: " << amount * 0.9;
            break;
        default:
            cout << "No discount applied\n";
            cout << "Final amount: " << amount;
        }
        break;
    }

    case 16:
    {
        // Program 16: Weekday/Weekend
        int day;
        cout << "Enter day number (1-7): ";
        cin >> day;

        switch (day)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Weekday";
            break;
        case 6:
        case 7:
            cout << "Weekend";
            break;
        default:
            cout << "Invalid day!";
        }
        break;
    }

    case 17:
    {
        // Program 17: Simple Game Menu
        cout << "Games:\n1. Snake\n2. Tetris\n3. Pacman\n";
        int game;
        cout << "Choose game (1-3): ";
        cin >> game;

        switch (game)
        {
        case 1:
            cout << "Starting Snake Game...";
            break;
        case 2:
            cout << "Starting Tetris...";
            break;
        case 3:
            cout << "Starting Pacman...";
            break;
        default:
            cout << "Game not available!";
        }
        break;
    }

    case 18:
    {
        // Program 18: Temperature Converter
        int choice;
        double temp;
        cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n";
        cout << "Enter choice: ";
        cin >> choice;
        cout << "Enter temperature: ";
        cin >> temp;

        switch (choice)
        {
        case 1:
            cout << temp << "°C = " << (temp * 9 / 5) + 32 << "°F";
            break;
        case 2:
            cout << temp << "°F = " << (temp - 32) * 5 / 9 << "°C";
            break;
        default:
            cout << "Invalid choice!";
        }
        break;
    }

    case 19:
    {
        // Program 19: Simple Login System
        int pin;
        cout << "Enter PIN (1234): ";
        cin >> pin;

        switch (pin)
        {
        case 1234:
            cout << "Access Granted!";
            break;
        default:
            cout << "Access Denied!";
        }
        break;
    }

    case 20:
    {
        // Program 20: Number Comparison
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (a > b)
        {
        case true:
            cout << a << " is greater than " << b;
            break;
        default:
            switch (a < b)
            {
            case true:
                cout << b << " is greater than " << a;
                break;
            default:
                cout << "Numbers are equal";
            }
        }
        break;
    }

    case 21:
    {
        // Program 21: Simple Alarm System
        int emergency;
        cout << "Emergency:\n1. Fire\n2. Medical\n3. Police\n";
        cout << "Choose emergency type: ";
        cin >> emergency;

        switch (emergency)
        {
        case 1:
            cout << "Calling Fire Department...";
            break;
        case 2:
            cout << "Calling Ambulance...";
            break;
        case 3:
            cout << "Calling Police...";
            break;
        default:
            cout << "Invalid emergency type!";
        }
        break;
    }

    case 22:
    {
        // Program 22: Simple Banking
        int accType;
        cout << "Account Types:\n1. Savings\n2. Current\n3. Fixed Deposit\n";
        cout << "Choose account type: ";
        cin >> accType;

        switch (accType)
        {
        case 1:
            cout << "Savings Account - Interest: 4%";
            break;
        case 2:
            cout << "Current Account - Interest: 2%";
            break;
        case 3:
            cout << "Fixed Deposit - Interest: 6%";
            break;
        default:
            cout << "Invalid account type!";
        }
        break;
    }

    case 23:
    {
        // Program 23: Number Sign
        int num;
        cout << "Enter a number: ";
        cin >> num;

        switch ((num > 0) - (num < 0))
        {
        case 1:
            cout << "Positive";
            break;
        case -1:
            cout << "Negative";
            break;
        case 0:
            cout << "Zero";
            break;
        }
        break;
    }

    case 24:
    {
        // Program 24: Simple Direction
        char dir;
        cout << "Enter direction (N/S/E/W): ";
        cin >> dir;

        switch (dir)
        {
        case 'N':
        case 'n':
            cout << "Moving North";
            break;
        case 'S':
        case 's':
            cout << "Moving South";
            break;
        case 'E':
        case 'e':
            cout << "Moving East";
            break;
        case 'W':
        case 'w':
            cout << "Moving West";
            break;
        default:
            cout << "Invalid direction!";
        }
        break;
    }

    case 25:
    {
        // Program 25: Final Grade Calculator
        int score;
        cout << "Enter exam score (0-100): ";
        cin >> score;

        switch (score / 20)
        {
        case 5:
            cout << "Excellent! Grade: A";
            break;
        case 4:
            cout << "Good! Grade: B";
            break;
        case 3:
            cout << "Average! Grade: C";
            break;
        case 2:
            cout << "Poor! Grade: D";
            break;
        case 1:
        case 0:
            cout << "Fail! Grade: F";
            break;
        default:
            cout << "Invalid score!";
        }
        break;
    }

    default:
        cout << "Invalid program number! Please enter 1-25.";
    }

    return 0;
}