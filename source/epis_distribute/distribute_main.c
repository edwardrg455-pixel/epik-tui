#include <ncurses.h>
#include "../main/home.h"

WINDOW *distribute_window;

int distribute_main()
{
    page_window_implementation(distribute_window, "f");

}
