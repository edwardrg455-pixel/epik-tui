#ifndef HOME_H
#define HOME_H

#include <ncurses.h>
#define MAX_CHAR_COUNT 256
#define TERMINAL_MIDDLE_POINT 90

typedef struct {
    const char *text;
    int position_y, position_x;
    int color;
    char *keybind;
    bool is_interacted_by_keybind;
    bool is_not_interacted_by_keybind;
    bool is_interacted_by_mouse;
    bool is_not_interacted_by_mouse;


} text_button;

typedef struct {
    const char *text;
    int position_y, position_x;
    int color;
} text_display;

// Text_buttons are interactive, text_displays are not.

typedef struct {
    int height;
    int width;
    int position_y;
    int position_x;
    WINDOW *init;
} line_box;

// line box variables only contain data of the line box itself.
// The text contents of the linebox are stored inside of text_button variables or text_display variables.
// line box variables are not interactive through keyboard or mouse.
// Any of their variable contents. Like text_button variables. Are interactive by design.
// Both text_display and text_button aren't going to be used to cover the list of packages.
// That is the job of an API.

int home_sign();
int goto_search_page();
int goto_storage_page();
int goto_container_testing_page();
int goto_distribution_page();
int goto_console_logs_page();
int goto_package_managers_page();
int goto_manual_guide_page();

#endif
