/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-tharek.akaichi
** File description:
** handle_event.c
*/

#include "../include/my.h"

void handle_event_bis(game_data *gd, sfEvent event)
{
    sfVector2i mousePosition;
    sfFloatRect dragonBounds;

    if (event.type == sfEvtMouseButtonPressed) {
            mousePosition = sfMouse_getPositionRenderWindow(gd->window);
            dragonBounds = sfSprite_getGlobalBounds(gd->character);
            handle_event_bis2(gd, event, mousePosition, dragonBounds);
    }
}

void handle_event_bis2(game_data *gd, sfEvent event,
    sfVector2i mousePosition, sfFloatRect dragonBounds)
{
    float newX;
    float newY;
    char scoreString[20];
    char fullScoreString[30] = "Score: ";

    if (sfFloatRect_contains(&dragonBounds,
        mousePosition.x, mousePosition.y)) {
        newX = -100.0f;
        newY = (float)(rand() % (sfRenderWindow_getSize(gd->window).y - 100));
        sfSprite_setPosition(gd->character, (sfVector2f){newX, newY});
        gd->score++;
        int_to_str(gd->score, scoreString);
        my_strcat(fullScoreString, scoreString);
        sfText_setString(gd->scoreText, fullScoreString);
    }
}

void handle_events(game_data *gd)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(gd->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(gd->window);
        else
            handle_event_bis(gd, event);
    }
}
