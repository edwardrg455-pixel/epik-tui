#include <ncurses.h>
#include <stdio.h>
#include "home.h"

int home_page_tui();






// main function
int main () {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(TRUE);

    start_color();
    home_sign();

    goto_search_page();
    goto_storage_page();
    goto_container_testing_page();
    goto_distribution_page();
    goto_console_logs_page();
    goto_package_managers_page();
    goto_manual_guide_page();


    // Call the home page TUI function
    int ch;
    while ((ch = getch()) != 'q') {
        refresh();
    }

    endwin();

    return 0;

}



// structure activate functions
