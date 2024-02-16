/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-tharek.akaichi
** File description:
** init_game_res.c
*/

#include "../include/my.h"

void initialize_character(game_data *gd)
{
    sfTexture *characterTexture =
        sfTexture_createFromFile("assets/dragon.png", NULL);
    sfVector2f characterPosition = {0.0f, 300.0f};

    gd->character = sfSprite_create();
    sfSprite_setTexture(gd->character, characterTexture, sfTrue);
    sfSprite_setPosition(gd->character, characterPosition);
}

void initialize_background(game_data *gd)
{
    sfTexture *back_game =
        sfTexture_createFromFile("assets/batbg.jpg", NULL);
    sfVector2f scale = {1.0, 0.935};

    gd->back_game_s = sfSprite_create();
    sfSprite_setTexture(gd->back_game_s, back_game, sfTrue);
    sfSprite_setScale(gd->back_game_s, scale);
}

void initialize_score_text(game_data *gd)
{
    sfFont *font =
        sfFont_createFromFile("assets/game.ttf");
    sfFloatRect textBounds;

    gd->scoreText = sfText_create();
    sfText_setString(gd->scoreText, "Score: 0");
    sfText_setFont(gd->scoreText, font);
    sfText_setCharacterSize(gd->scoreText, 36);
    sfText_setFillColor(gd->scoreText, sfBlue);
    textBounds = sfText_getLocalBounds(gd->scoreText);
    sfText_setPosition(gd->scoreText, (sfVector2f)
        {sfRenderWindow_getSize(gd->window).x -
        textBounds.width - 820.0f, 5.0f});
}

void initialize_game_resources(game_data *gd)
{
    sfVector2f cursorScale = {0.2f, 0.2f};

    initialize_character(gd);
    initialize_background(gd);
    sfSprite_setScale(gd->cursor, cursorScale);
    gd->animationSpeed = 4.6f;
    gd->characterRect = (sfIntRect){0, 161, 191, 161};
    gd->animationClock = sfClock_create();
    initialize_score_text(gd);
}
