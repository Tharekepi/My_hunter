/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-tharek.akaichi
** File description:
** destroy.c
*/

#include "../include/my.h"

sfMusic *gameMusic;

void initialize_game_music(game_data *gd)
{
    gameMusic = sfMusic_createFromFile("assets/batman_theme.ogg");
    if (!gameMusic) {
        printf("Failed to load music\n");
    } else {
        sfMusic_setVolume(gameMusic, 35.0);
        sfMusic_play(gameMusic);
    }
}

void cleanup_game_data(game_data *gd)
{
    sfSprite_destroy(gd->back_game_s);
    sfSprite_destroy(gd->cursor);
    sfSprite_destroy(gd->character);
    sfRenderWindow_destroy(gd->window);
    sfClock_destroy(gd->animationClock);
    if (gameMusic) {
        sfMusic_stop(gameMusic);
        sfMusic_destroy(gameMusic);
    }
}
