/*
Created and maintained by Mohamed Jinas (Github: jinas123)

*/

#include<stdio.h>
#include<windows.h>
#include "climax.h"

HANDLE hConsole;

void darkBlue(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
}

void darkRed(HANDLE hConsole)
{
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
}

void darkGreen(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
}

void darkCyan(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void darkMagenta(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE);
}

void darkYellow(HANDLE hConsole)
{
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
}

void darkGray(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void gray(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY);
}

void blue(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY | FOREGROUND_BLUE);
}

void green(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY | FOREGROUND_GREEN);
}

void cyan(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void red(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY | FOREGROUND_RED);
}

void magenta(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
}

void yellow(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
}

void white(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void normal(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void bgRed(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,BACKGROUND_RED);
}

void bgGreen(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,BACKGROUND_GREEN);
}

void bgBlue(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,BACKGROUND_BLUE);
}

void bgGray(HANDLE hConsole)
{
    SetConsoleTextAttribute(hConsole,BACKGROUND_INTENSITY);
}
