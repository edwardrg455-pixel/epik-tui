#include <ncurses.h>
#include "../main/home.h"

WINDOW *container_window;

int autocontainer_main()
{
    page_window_implementation(container_window, "d");

}
