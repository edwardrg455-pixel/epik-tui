#include <ncurses.h>
#include "../main/home.h"

WINDOW *storage_window;

int storage_main()
{
    page_window_implementation(storage_window, "s");

}
