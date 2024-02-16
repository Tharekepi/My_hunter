/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday03-tharek.akaichi
** File description:
** my_print_revalpha.c
*/

#include "../../include/my.h"

int my_print_revalpha(void)
{
    char l = 'z';

    while (l >= 'a') {
        my_putchar(l);
        l--;
    }
    return 0;
}
