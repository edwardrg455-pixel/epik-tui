/*  Welcome to home.c
*   This is the first file edward worked on
*   Remember. There are 53 rows and 212 columns in a modern linux terminal
*   Rules :
*   1. Don't forget to declare a worker or manager function in home.h
*   2. Update the comments if you've finished your tests and finalized your commit.
*   3. Worker functions are to be placed at the very bottom.
*   4. Manager functions are to be placed at the very top.
*   5. Give a reason why you would want to link a library or a header file in here in the first place.
*/


#include "home.h"
#include <curses.h>
#include <ncurses.h>
#include <stdbool.h>




void home_navigate(const char key)
{
    switch (key)
    {
    case 'a':
        search_main();
        break;
    case 's':
        storage_main();
        break;
    case 'd':
        autocontainer_main();
        break;
    case 'f':
        distribute_main();
        break;
    case 'j':
        logs_main();
        break;
    case 'k':
        pm_main();
        break;
    case 'l':
        manual_main();
        break;
    }
    clear();
    refresh();
    home_window_menubar();
}



int home_window_menubar()
{
    char *home_window_text_buttons[] = {
    "Search  Packages                    (a)",
    "User Storage                        (s)",
    "Container Testing                   (d)",
    "Distribute Packages                 (f)",
    "Console Logs                        (j)",
    "Package Managers                    (k)",
    "Manual Guide                        (l)",
    };

    mvwprintw(stdscr, 16, TERMINAL_MIDDLE_POINT, "                   EPIK                ");
    mvwprintw(stdscr, 18, TERMINAL_MIDDLE_POINT, "       Edward's package installer kit  ");
    mvwprintw(stdscr, 28, TERMINAL_MIDDLE_POINT, "%s", home_window_text_buttons[0]);
    mvwprintw(stdscr, 30, TERMINAL_MIDDLE_POINT, "%s", home_window_text_buttons[1]);
    mvwprintw(stdscr, 32, TERMINAL_MIDDLE_POINT, "%s", home_window_text_buttons[2]);
    mvwprintw(stdscr, 34, TERMINAL_MIDDLE_POINT, "%s", home_window_text_buttons[3]);
    mvwprintw(stdscr, 36, TERMINAL_MIDDLE_POINT, "%s", home_window_text_buttons[4]);
    mvwprintw(stdscr, 38, TERMINAL_MIDDLE_POINT, "%s", home_window_text_buttons[5]);
    mvwprintw(stdscr, 40, TERMINAL_MIDDLE_POINT, "%s", home_window_text_buttons[6]);
    refresh();
}

void page_window_implementation(WINDOW *win, const char *keybind)
{
    win = newwin(40, 100, 5, 50);
    box(win, 0, 0);
    wrefresh(win);
    char ch;
    while ((ch = getch()) != 'q') {
        delwin(win);
    }
}
