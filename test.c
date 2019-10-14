#include<stdio.h>
#include<windows.h>
#include "climax.h"


//gcc -o main test.c climax.c

void main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  

    red(hConsole);
    printf("Hello from light red \n");

    normal(hConsole);
    printf("Hello from normal \n");

    green(hConsole);
    printf("Hello from light green \n");

    gray(hConsole);
    printf("Hello from light gray \n");

    blue(hConsole);
    printf("Hello from light blue \n");

    cyan(hConsole);
    printf("Hello from light cyan \n");

    magenta(hConsole);
    printf("Hello from light magenta \n");

    yellow(hConsole);
    printf("Hello from light yellow \n");

    white(hConsole);
    printf("Hello from white \n");


    darkBlue(hConsole);
    printf("Hello from dark blue \n");

    darkRed(hConsole);
    printf("Hello from dark Red \n");

    darkGreen(hConsole);
    printf("Hello from dark Green \n");

    darkCyan(hConsole);
    printf("Hello from dark Cyan \n");

    darkMagenta(hConsole);
    printf("Hello from dark Magenta \n");

    darkYellow(hConsole);
    printf("Hello from dark yellow \n");

    darkGray(hConsole);
    printf("Hello from dark gray \n");

    normal(hConsole);

    getchar();

}