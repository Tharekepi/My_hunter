/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-tharek.akaichi
** File description:
** my_strdup.c
*/

#include "../../include/my.h"

char *my_strdup(char const *src)
{
    char *dest;
    int i = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
