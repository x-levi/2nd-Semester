#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

#define GREEN "\033[32m"
#define WHITE "\033[37m"
#define RESET "\033[0m"

void LoadingBar(int amount, string message)
{
    system("cls");
    int width = 30; // bar length

    // First show loading line
    cout << "\n\nNew Amount : Loading...\n\n[";

    for (int i = 0; i <= width; i++)
    {
        // fill blocks
        cout << GREEN << char(219) << RESET;
        Sleep(30);
        // calculate percentage
        int percent = (i * 100) / width;
        // show percentage live
        cout.flush();
        if (i == width)
            cout << "] " << WHITE << percent << "%" << RESET;
    }
    // Pause before replacing text
    Sleep(600);
    // Clear screen completely
    system("cls");
    // Final output
    cout << "\n\n"
         << message << amount << "\n\n[";
    for (int i = 0; i < width; i++)
        cout << GREEN << char(219) << RESET;
    cout << "] " << WHITE << "100%" << RESET << "\n";
    cout << "Press Any Key to Go Back..." << endl;
    getch();
}
