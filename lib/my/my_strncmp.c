/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-tharek.akaichi
** File description:
** my_strncmp.c
*/

#include "../../include/my.h"

int cond(char const *s1, char const *s2, int n, int i)
{
    if (s1[i] > s2[i])
        return (1);
    else if (s1[i] < s2[i])
        return (-1);
    if ((n - 1) == i)
        return (0);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i < n) {
        cond(s1, s2, n, i);
        i++;
    }
}
