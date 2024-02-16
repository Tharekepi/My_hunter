/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday03-tharek.akaichi
** File description:
** my_print_isneg.c
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    if (n < 0)
        my_putchar('N');
}
