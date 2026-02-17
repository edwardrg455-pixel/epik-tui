#include "home.h"
#include <ncurses.h>
#include <stdio.h>

/*
*   EPIK - Edward's Package Manager.
*
*   Welcome to the main file.
*   This is where all the execution of the EPIK application is launched.
*   If you wish to deploy a feature.
*   Look no further than calling your manager function in here.
*   Rules :
*   1. Do not define worker and manager functions in the main.c file.
*   2. Do not bother with other people's manager functions
*   3. Do not write nor remove any code in int main except declaring you manager function
*   4. Do not write macros in the main.c file.
*
*/


int main()
{
    initscr();
    raw();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    home_window_menubar();

    char ch;
    while ((ch = getch()) != 'q')
    {
        if (ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'j' || ch == 'k' || ch == 'l')
        {
            home_navigate(ch);
        }
    }
    endwin();
    return 0;
}


// structure activate functions
