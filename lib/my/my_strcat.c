/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_strcat.c
*/

char *my_strcat(char *dest, char const *src)
{
    char *o_d = dest;

    while (*dest)
        dest++;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return o_d;
}
