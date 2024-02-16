/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-tharek.akaichi
** File description:
** my_strstr.c
*/

#include "../../include/my.h"

char *my_strstr(char *str, const char *to_find)
{
    int i = 0;
    int j;
    int tfl = my_strlen(to_find);

    while (str[i] != '\0') {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
            j++;
        if (j == tfl)
            return &str[i];
        i++;
    }
    return NULL;
}
