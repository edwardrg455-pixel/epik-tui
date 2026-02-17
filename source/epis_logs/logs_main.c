#include <ncurses.h>
#include "../main/home.h"

WINDOW *logs_window;

int logs_main()
{
    page_window_implementation(logs_window, "j");

}
