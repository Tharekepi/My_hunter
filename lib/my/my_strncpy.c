/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-tharek.akaichi
** File description:
** my_strcnpy.c
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i = 0; i < n; i++) {
        if (src[i] != '\0')
            dest[i] = src[i];
        else {
            dest[i] = '\0';
            break;
        }
    }
    return (dest);
}
