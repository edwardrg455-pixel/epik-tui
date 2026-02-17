#include <ncurses.h>
#include "../main/home.h"

WINDOW *search_window;

int search_main()
{
    page_window_implementation(search_window, "a");
}
