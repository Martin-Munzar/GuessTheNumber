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
      
      int theNumber = pickaRange;
    if (pickaRange() != -1) {
       cout << "";       
    }
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

    int switcher;
    int nMax, nMin = 1;
    int nRandonNumber;

    cout << "Pick your range:\n";
    cout << "1 - Primitive: <1-2>\n";
    cout << "2 - Easy: <1-5>\n";
    cout << "3 - Medium: <1-10>\n";
    cout << "4 - Hard: <1-15>\n";
    cout << "5 - Pure insanity <1-100>\n\n";

    cout << "Pick a number (1-5) to pick a range: ";
    cin >> switcher;

    srand(time(NULL));

    switch (switcher)
    {
        case 1:
            nMax = 2;

            nRandonNumber = rand() % ((nMax + 1) - nMin) + nMin;
            printf("%d\n", nRandonNumber);
          break;
        case 2:
            nMax = 5;

            nRandonNumber = rand() % ((nMax + 1) - nMin) + nMin;
            printf("%d\n", nRandonNumber);
          break;
        case 3:
            nMax = 10;

            nRandonNumber = rand() % ((nMax + 1) - nMin) + nMin;
            printf("%d\n", nRandonNumber);
          break;
        case 4:
            nMax = 15;

            nRandonNumber = rand() % ((nMax + 1) - nMin) + nMin;
            printf("%d\n", nRandonNumber);
          break;
        case 5:
            nMax = 100;

            nRandonNumber = rand() % ((nMax + 1) - nMin) + nMin;
            printf("%d\n", nRandonNumber);
         break;
    default:
        printf("Not a valid number!\n");
        return -1;
      break;
    }

    return nRandonNumber;
}

