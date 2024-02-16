/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday03-tharek.akaichi
** File description:
** my_print_alpha.c
*/

#include "../../include/my.h"

int my_print_alpha(void)
{
    char l = 'a';

    while (l <= 'z') {
        my_putchar(l);
        l++;
    }
}
