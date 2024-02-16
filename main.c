/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-tharek.akaichi
** File description:
** main.c
*/

#include "include/my.h"

static void message_help(void)
{
    my_putstr("Welcome to my_hunter!\n");
    my_putstr("This is a game where Batman and gotham needs you.\n");
    my_putstr("There are dragons in the city!\n");
    my_putstr("You can shoot the dragons "
        "by clicking on them with your batarang.\n");
    my_putstr("You can also pause the game by pressing 'P'.\n");
    my_putstr("saves as much time as possible"
        " for batman so he can save us all we trust you...\n");
}

int if_click_window(sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x >= 898 && mouse.x <= 1105 && mouse.y >= 545
        && mouse.y <= 727) {
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 1;
    }
    return 0;
}

void initialize_game_data(game_data *gd)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfTexture *texture = sfTexture_createFromFile("assets/bat_bg.jpg", NULL);
    sfTexture *buttonTexture =
        sfTexture_createFromFile("assets/start.png", NULL);
    sfVector2f buttonPosition = {900, 550};
    sfVector2f spriteScale = {1.9f, 1.55f};
    sfVector2f buttonScale = {0.2f, 0.2f};

    gd->window = sfRenderWindow_create(mode, "My Hunter",
        sfResize | sfClose, NULL);
    gd->sprite = sfSprite_create();
    sfSprite_setTexture(gd->sprite, texture, sfTrue);
    gd->button = sfSprite_create();
    sfSprite_setTexture(gd->button, buttonTexture, sfTrue);
    sfSprite_setPosition(gd->button, buttonPosition);
    sfSprite_setScale(gd->sprite, spriteScale);
    sfSprite_setScale(gd->button, buttonScale);
    initialize_cursor(gd);
    initialize_game_music(gd);
}

int main(int ac, char **av)
{
    game_data gd;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        message_help();
        return 0;
    }
    if (ac == 1) {
        initialize_game_data(&gd);
        display_menu(&gd);
        game_loop(&gd);
        cleanup_game_data(&gd);
        return 0;
    }
    return 84;
}
