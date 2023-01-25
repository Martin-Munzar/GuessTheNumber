#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;
void introduction();
int pickaRange();


int main() {

   // introduction();
    
    cout << "Press any key to continue...";
    getchar();

    pickaRange();



}

void introduction() {
    char characters [] = "\t Hello! Welcome to this simple app *GuessTheNumber*!\n\n\
\t So as the name says you have guess the number.\n\
\t First, you have to pick a range.\n\n\n";
     
    int i;
    for (i = 0; i < strlen(characters); i++)
    {
        cout << characters[i];
        Sleep(50);
    }

    return;
}

int pickaRange() {

    int switcher = 0;

    cout << "Pick your range:";
    cout << "1 - Primitive: <1-2>";
    cout << "2 - Easy: <1-5>";
    cout << "3 - Medium: <1-10>";
    cout << "4 - Hard: <1-15>";
    cout << "5 - Pure insanity <1-100>";

    cin >> switcher;

    switch (switcher)
    {
    default:
        break;
    }

    return 1;

}

