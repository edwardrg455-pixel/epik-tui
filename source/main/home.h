#ifndef HOME_H
#define HOME_H


#include <ncurses.h>
#define MAX_CHAR_COUNT 256
#define TERMINAL_MIDDLE_POINT 90
#define LINE_BOX_HEIGHT_FOR_HOME_UI 16
#define LINE_BOX_WIDTH_FOR_HOME_UI 24

// home.h worker functions.
int home_window_menubar();
void home_navigate(char key);
void page_window_implementation(WINDOW *win, const char *keybind);
void escape_window(WINDOW *win);

//epis main functions and their global window variables

extern WINDOW *search_window;
extern WINDOW *storage_window;
extern WINDOW *container_window;
extern WINDOW *distribute_window;
extern WINDOW *logs_window;
extern WINDOW *package_manager_window;
extern WINDOW *manual_window;

int search_main();
int storage_main();
int autocontainer_main();
int distribute_main();
int logs_main();
int pm_main();
int manual_main();

#endif
