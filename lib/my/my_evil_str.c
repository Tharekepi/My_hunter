/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-tharek.akaichi
** File description:
** my_evil_str.c
*/

#include "../../include/my.h"

char *my_evil_str(char *str)
{
    char c;
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return (str);
}
