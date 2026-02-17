#ifndef WINDOW_H
#define WINDOW_H
#include <ncurses.h>
typedef struct {
    WINDOW *win;
    int height;
    int width;
    int starty;
    int startx;
} UIWindow;

UIWindow create_window(int height, int width, int starty, int startx);
void destroy_ui_window(UIWindow *ui);

typedef struct {
    WINDOW *win;
    int height;
    int width;
    int starty;
    int startx;
    char *label;
    int selected;
} Button;



Button create_button(int height, int width, int starty, int startx, char *label);
void draw_button(Button *btn);
void destroy_button(Button *btn);

#endif
