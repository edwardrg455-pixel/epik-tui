#include <ncurses.h>
#include "../main/home.h"

WINDOW *package_manager_window;

int pm_main()
{
    page_window_implementation(package_manager_window, "k");

}
