/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday03-tharek.akaichi
** File description:
** my_print_digit.c
*/

#include "../../include/my.h"

int my_print_digits(void)
{
    int n = '0';

    while (n <= '9') {
        my_putchar(n);
        n++;
    }
}
