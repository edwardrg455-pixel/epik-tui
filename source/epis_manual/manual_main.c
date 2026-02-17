#include <ncurses.h>
#include "../main/home.h"

WINDOW *manual_window;

int manual_main()
{
    page_window_implementation(manual_window, "l");

}
