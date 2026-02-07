#include <curses.h>
#include <ncurses.h>
#include <stdbool.h>
#include "home.h"

// There are 53 rows and 212 columns in a modern linux terminal

int home_sign() {
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_BLACK); // White on black


    text_display epik_sign = {
        .text = "EPIK",
        .position_y = 15,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1
    };

    text_display epik_meaning = {
        .text = "Edward's Package Installer Kit",
        .position_y = 14,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1
    };


    attron(COLOR_PAIR(epik_sign.color));
    mvaddstr(epik_sign.position_y, epik_sign.position_x, epik_sign.text);
    attroff(COLOR_PAIR(epik_sign.color));

    attron(COLOR_PAIR(epik_meaning.color));
    mvaddstr(epik_meaning.position_y, epik_meaning.position_x, epik_meaning.text);
    attroff(COLOR_PAIR(epik_meaning.color));

    refresh();
    return 0;
}

int goto_search_page() {
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    text_button search_button = {
        .text = "Search Packages (a)",
        .position_y = 20,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1,
        .keybind = "a",
        .is_interacted_by_keybind = false,
        .is_not_interacted_by_keybind = true,
        .is_interacted_by_mouse = false,
        .is_not_interacted_by_mouse = true,
    };

    line_box search_text_box = {
        .height = 12,
        .width = 30,
        .position_y = 20,
        .position_x = TERMINAL_MIDDLE_POINT,
        .init = newwin(search_text_box.height, search_text_box.width, search_text_box.position_y, search_text_box.position_x)
    };

    box(search_text_box.init, 0, 0);
    attron(COLOR_PAIR(search_button.color));
    mvaddstr(search_button.position_y, search_button.position_x, search_button.text);
    attroff(COLOR_PAIR(search_button.color));
    return 0;
}

int goto_storage_page() {
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    text_button storage_button = {
        .text = "User Storage (s)",
        .position_y = 23,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1,
        .keybind = "s",
        .is_interacted_by_keybind = false,
        .is_not_interacted_by_keybind = true,
        .is_interacted_by_mouse = false,
        .is_not_interacted_by_mouse = true,
    };

    line_box storage_text_box = {
        .height = 12,
        .width = 30,
        .position_y = 23,
        .position_x = TERMINAL_MIDDLE_POINT,
        .init = newwin(storage_text_box.height, storage_text_box.width, storage_text_box.position_y, storage_text_box.position_x)
    };

    box(storage_text_box.init, 0, 0);
    attron(COLOR_PAIR(storage_button.color));
    mvaddstr(storage_button.position_y, storage_button.position_x, storage_button.text);
    attroff(COLOR_PAIR(storage_button.color));
    return 0;
}

int goto_container_testing_page() {
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    text_button container_testing_button = {
        .text = "Container testing (d)",
        .position_y = 26,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1,
        .keybind = "d",
        .is_interacted_by_keybind = false,
        .is_not_interacted_by_keybind = true,
        .is_interacted_by_mouse = false,
        .is_not_interacted_by_mouse = true,
    };

    line_box storage_text_box = {
        .height = 12,
        .width = 30,
        .position_y = 26,
        .position_x = TERMINAL_MIDDLE_POINT,
        .init = newwin(storage_text_box.height, storage_text_box.width, storage_text_box.position_y, storage_text_box.position_x)
    };

    box(storage_text_box.init, 0, 0);
    attron(COLOR_PAIR(container_testing_button.color));
    mvaddstr(container_testing_button.position_y, container_testing_button.position_x, container_testing_button.text);
    attroff(COLOR_PAIR(container_testing_button.color));
    return 0;
}

int goto_distribution_page() {
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    text_button distribute_button = {
        .text = "Distribute Packages (f)",
        .position_y = 29,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1,
        .keybind = "f",
        .is_interacted_by_keybind = false,
        .is_not_interacted_by_keybind = true,
        .is_interacted_by_mouse = false,
        .is_not_interacted_by_mouse = true,
    };

    line_box storage_text_box = {
        .height = 12,
        .width = 30,
        .position_y = 29,
        .position_x = TERMINAL_MIDDLE_POINT,
        .init = newwin(storage_text_box.height, storage_text_box.width, storage_text_box.position_y, storage_text_box.position_x)
    };

    box(storage_text_box.init, 0, 0);
    attron(COLOR_PAIR(distribute_button.color));
    mvaddstr(distribute_button.position_y, distribute_button.position_x, distribute_button.text);
    attroff(COLOR_PAIR(distribute_button.color));
    return 0;
}

int goto_console_logs_page() {
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    text_button history_logs_button = {
        .text = "History logs (j)",
        .position_y = 32,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1,
        .keybind = "j",
        .is_interacted_by_keybind = false,
        .is_not_interacted_by_keybind = true,
        .is_interacted_by_mouse = false,
        .is_not_interacted_by_mouse = true,
    };

    line_box storage_text_box = {
        .height = 12,
        .width = 30,
        .position_y = 32,
        .position_x = TERMINAL_MIDDLE_POINT,
        .init = newwin(storage_text_box.height, storage_text_box.width, storage_text_box.position_y, storage_text_box.position_x)
    };

    box(storage_text_box.init, 0, 0);
    attron(COLOR_PAIR(history_logs_button.color));
    mvaddstr(history_logs_button.position_y, history_logs_button.position_x, history_logs_button.text);
    attroff(COLOR_PAIR(history_logs_button.color));
    return 0;
}

int goto_package_managers_page() {
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    text_button package_manager_button = {
        .text = "Package Managers (k)",
        .position_y = 35,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1,
        .keybind = "k",
        .is_interacted_by_keybind = false,
        .is_not_interacted_by_keybind = true,
        .is_interacted_by_mouse = false,
        .is_not_interacted_by_mouse = true,
    };

    line_box storage_text_box = {
        .height = 12,
        .width = 30,
        .position_y = 35,
        .position_x = TERMINAL_MIDDLE_POINT,
        .init = newwin(storage_text_box.height, storage_text_box.width, storage_text_box.position_y, storage_text_box.position_x)
    };

    box(storage_text_box.init, 0, 0);
    attron(COLOR_PAIR(package_manager_button.color));
    mvaddstr(package_manager_button.position_y, package_manager_button.position_x, package_manager_button.text);
    attroff(COLOR_PAIR(package_manager_button.color));
    return 0;
}

int goto_manual_guide_page() {
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    text_button manual_guide_button = {
        .text = "Manual Guide (l)",
        .position_y = 38,
        .position_x = TERMINAL_MIDDLE_POINT,
        .color = 1,
        .keybind = "l",
        .is_interacted_by_keybind = false,
        .is_not_interacted_by_keybind = true,
        .is_interacted_by_mouse = false,
        .is_not_interacted_by_mouse = true,
    };

    line_box storage_text_box = {
        .height = 12,
        .width = 30,
        .position_y = 38,
        .position_x = TERMINAL_MIDDLE_POINT,
        .init = newwin(storage_text_box.height, storage_text_box.width, storage_text_box.position_y, storage_text_box.position_x)
    };

    box(storage_text_box.init, 0, 0);
    attron(COLOR_PAIR(manual_guide_button.color));
    mvaddstr(manual_guide_button.position_y, manual_guide_button.position_x, manual_guide_button.text);
    attroff(COLOR_PAIR(manual_guide_button.color));
    return 0;
}
