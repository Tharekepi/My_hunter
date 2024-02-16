/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-tharek.akaichi
** File description:
** my_strcmp.c
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2 )
{
    int i = my_strlen(s1);
    int j = my_strlen(s2);

    if (i > j)
        return 1;
    else if (i < j)
        return -1;
    if (i == j)
        return 0;
}
