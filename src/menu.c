/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-tharek.akaichi
** File description:
** menu.c
*/

#include "../include/my.h"

void initialize_cursor(game_data *gd)
{
    sfTexture *cursorTexture =
        sfTexture_createFromFile("assets/bat_cursor2.png", NULL);

    gd->cursor = sfSprite_create();
    sfSprite_setTexture(gd->cursor, cursorTexture, sfTrue);
    sfRenderWindow_setMouseCursorVisible(gd->window, sfFalse);
}

int event_loop(game_data *gd)
{
    sfEvent event;

    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(gd->window);
        return 1;
    }
    return 0;
}

void display_menu(game_data *gd)
{
    sfEvent event;
    int start_clicked = 0;

    sfRenderWindow_setMouseCursorVisible(gd->window, sfTrue);
    while (sfRenderWindow_isOpen(gd->window)) {
        while (sfRenderWindow_pollEvent(gd->window, &event)) {
            event_loop(gd);
            start_clicked = if_click_window(gd->window);
        }
        sfRenderWindow_clear(gd->window, sfBlack);
        sfRenderWindow_drawSprite(gd->window, gd->sprite, NULL);
        sfRenderWindow_drawSprite(gd->window, gd->button, NULL);
        sfRenderWindow_display(gd->window);
        if (start_clicked)
            break;
    }
    sfRenderWindow_setMouseCursorVisible(gd->window, sfFalse);
    sfSprite_destroy(gd->sprite);
    sfSprite_destroy(gd->button);
}
