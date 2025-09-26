#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include "Colors.cpp"
#include "Loading.cpp"
using namespace std;

class ATM
{
private:
    int pin;
    double balance;

public:
    // Constructor
    ATM(int userPin, double initialBalance)
    {
        pin = userPin;
        balance = initialBalance;
    }

    // Verify PIN
    bool verifyPin(int enteredPin)
    {
        return enteredPin == pin;
    }

    // Show Balance
    void showBalance() const
    {

        cout << "Your current balance is: $" << GREEN << balance << RESET << endl;
    }

    // Deposit Money
    void deposit(double amount)
    {
        if (amount >= 500)
        {
            balance += amount;
            cout << endl;
            LoadingBar(balance, "Deposit successful. New balance: $");
        }
        else
        {
            cout << BG_RED << WHITE << "Invalid deposit amount! min amount to deposit is $500" << RESET << endl;
            cout << "Press any Key to Go Back!!";
            getch();
        }
    }

    // Withdraw Money
    void withdraw(double amount)
    {
        if (amount < 500)
        {
            cout << RED << "Invalid amount! min amount to widthdraw is $500" << RESET << endl;
            cout << "Press any Key to Go Back!!";
            getch();
        }
        else if (amount > balance)
        {
            cout << YELLOW << "Insufficient funds!" << RESET << endl;
            cout << "Press any Key to Go Back!!";
            getch();
        }
        else
        {
            balance -= amount;
            cout << endl;
            LoadingBar(balance, "Withdrawal successful. New balance: $");
        }
    }
};

void DisplayInfo()
{
    // Display Information -----------------------------
    cout << WHITE;
    cout << "\n+" << setfill('-') << setw(25) << "+\n";
    cout << "|" << setfill(' ') << GREEN << "    [1]" << RESET << " CheckBalance" << right << setw(5) << "|\n";
    cout << "|" << setfill(' ') << GREEN << "    [2]" << RESET << " Deposit" << right << setw(10) << "|\n";
    cout << "|" << setfill(' ') << GREEN << "    [3]" << RESET << " Withdrawal" << right << setw(7) << "|\n";
    cout << "|" << setfill(' ') << RED << "    [0]" << RESET << " Exit" << right << setw(13) << "|\n";
    cout << "+" << setfill('-') << setw(25) << "+\n";
    cout << RESET;
}

void DisplayLogin()
{
    // Display Login -----------------------------
    cout << "\n+" << setfill('-') << setw(25) << "+\n";
    cout << "|" << setfill(' ') << GREEN << "    [1]" << RESET << " Enter PIN" << right << setw(8) << "|\n";
    cout << "|" << setfill(' ') << RED << "    [0]" << RESET << " Exit" << right << setw(13) << "|\n";
    cout << "+" << setfill('-') << setw(25) << "+\n";
}

void mainATM()
{
    // Create ATM account with default PIN and balance
    ATM userAccount(1234, 1000.0);
    int enteredPin;
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;

    // Login system
    system("cls");
    cout << BG_BLUE << "Welcome to Cato ATM!" << RESET << endl;

    while (attempts < MAX_ATTEMPTS)
    {
        cout << GREEN << "Enter your 4-digit PIN: " << RESET;
        cin >> enteredPin;

        if (userAccount.verifyPin(enteredPin))
        {

            int choice;

        START:
            system("cls");
            DisplayInfo();
            choice = getch();

            switch (choice)
            {
            case '1':
                userAccount.showBalance();

                cout << "\n\n Press any key to continue...";
                getch();
                goto START;
                break;
            case '2':
            {
                double depositAmount;
                cout << "Enter amount to deposit: $";
                cin >> depositAmount;
                userAccount.deposit(depositAmount);
                goto START;
                break;
            }
            case '3':
            {
                double withdrawAmount;
                cout << "Enter amount to withdraw: $";
                cin >> withdrawAmount;
                userAccount.withdraw(withdrawAmount);
                goto START;
                break;
            }
            case '0':
                cout << BG_BLUE << "Thank you for using our ATM. Goodbye!" << RESET << endl;
                break;
            default:
                cout << BG_RED << "Invalid choice. Please select 1-4." << RESET << endl;
                cout << MAGENTA << "\n\n Press any key to continue..." << RESET;
                getch();
                goto START;
            }

            break; // Exit login loop after successful session
        }
        else
        {
            attempts++;
            cout << RED << "Incorrect PIN. Attempts left: " << (MAX_ATTEMPTS - attempts) << RESET << endl;
            if (attempts == MAX_ATTEMPTS)
            {
                cout << BG_RED << "Too many failed attempts. Card blocked." << RESET << endl;
            }
        }
    }
}
// Main function
int main()
{

Begin:
    system("cls");
    DisplayLogin();
    char getAns = getch();
    switch (getAns)
    {
    case '1':
        mainATM();
        break;
    case '0':
        system("cls");
        cout << BG_GREEN << "\n\t\tTHANKS FOR COMMING!!" << RESET << endl;
        cout << "\nPress any key to go back... ";
        getch(); // waits until a key is pressed
        exit(0);
        break;
    default:
        system("cls");
        cout << RED << "\n\nPlease Enter Only 0 or 1\n"
             << RESET;
        cout << "\nPress any key to go back... ";
        getch(); // waits until a key is pressed
        goto Begin;
        break;
    }

    return 0;
}
