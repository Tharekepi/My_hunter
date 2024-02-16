/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-tharek.akaichi
** File description:
** my_strcpy.c
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
