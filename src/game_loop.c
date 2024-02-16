/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-tharek.akaichi
** File description:
** game_loop.c
*/

#include "../include/my.h"

void update_game_state(game_data *gd)
{
    sfVector2f characterPosition = sfSprite_getPosition(gd->character);
    sfTime elapsed = sfClock_getElapsedTime(gd->animationClock);
    float seconds = sfTime_asSeconds(elapsed);
    sfVector2i mousePosition = sfMouse_getPositionRenderWindow(gd->window);
    sfVector2f cursorPosition =
        {(float)mousePosition.x -
        sfSprite_getGlobalBounds(gd->cursor).width / 2,
        (float)mousePosition.y -
        sfSprite_getGlobalBounds(gd->cursor).height / 2};

    characterPosition.x += 1.3f;
    if (characterPosition.x > sfRenderWindow_getSize(gd->window).x)
        characterPosition.x = -sfSprite_getGlobalBounds(gd->character).width;
    sfSprite_setPosition(gd->character, characterPosition);
    if (seconds > 1.0 / gd->animationSpeed) {
        move_rect(&gd->characterRect, 191, 3 * 191);
        sfClock_restart(gd->animationClock);
    }
    sfSprite_setTextureRect(gd->character, gd->characterRect);
    sfSprite_setPosition(gd->cursor, cursorPosition);
}

void render_game(game_data *gd)
{
    sfRenderWindow_clear(gd->window, sfBlack);
    sfRenderWindow_drawSprite(gd->window, gd->back_game_s, NULL);
    sfRenderWindow_drawSprite(gd->window, gd->character, NULL);
    sfRenderWindow_drawSprite(gd->window, gd->cursor, NULL);
    sfRenderWindow_drawText(gd->window, gd->scoreText, NULL);
    sfRenderWindow_display(gd->window);
}

int game_loop(game_data *gd)
{
    initialize_game_resources(gd);
    while (sfRenderWindow_isOpen(gd->window)) {
        handle_events(gd);
        update_game_state(gd);
        render_game(gd);
    }
    return 0;
}
