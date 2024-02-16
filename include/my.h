/*
** EPITECH PROJECT, 2018
** hunter.h
** File description:
** hunter.h
*/

#ifndef HUNTER_H_
    #define HUNTER_H_

    #include <SFML/Graphics.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Texture.h>
    #include <SFML/Graphics/Sprite.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Types.h>
    #include <SFML/Audio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <time.h>
    #include <errno.h>
    #include <stdio.h>

typedef struct {
    sfRenderWindow *window;
    sfSprite *sprite;
    sfSprite *button;
    sfSprite *cursor;
    sfSprite *back_game_s;
    sfSprite *character;
    sfIntRect characterRect;
    sfClock *animationClock;
    float animationSpeed;
    int score;
    sfText *scoreText;
} game_data;


void initialize_cursor(game_data *gd);
int event_loop(game_data *gd);
void display_menu(game_data *gd);

void move_rect(sfIntRect *rect, int offset, int max_value);

void initialize_character(game_data *gd);
void initialize_background(game_data *gd);
void initialize_score_text(game_data *gd);
void initialize_game_resources(game_data *gd);

void handle_events(game_data *gd);
void handle_event_bis(game_data *gd, sfEvent event);
void handle_event_bis2(game_data *gd, sfEvent event,
                       sfVector2i mousePosition, sfFloatRect dragonBounds);

void update_game_state(game_data *gd);
void render_game(game_data *gd);
int game_loop(game_data *gd);

void initialize_game_music(game_data *gd);
void cleanup_game_data(game_data *gd);
int if_click_window(sfRenderWindow *window);

void int_to_str(int num, char *str);
char *my_strcat(char *dest, char const *src);

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_getnbr(char const *str);
void my_put_nbr(int nb);

char *my_revstr(char *str);

#endif
