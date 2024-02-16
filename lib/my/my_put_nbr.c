/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday03-tharek.akaichi
** File description:
** my_put_nbr.c
*/

#include "../../include/my.h"

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
}

void my_put_nbr_base_bis(int i, int j, char buffer[32])
{
    i = j - 1;
    while (i >= 0) {
        my_putchar(buffer[i]);
        i--;
    }
}

void my_put_nbr_base(int num, int base)
{
    char buffer[32];
    int j = 0;
    int d;
    int i;

    if (num < 0) {
        my_putchar('-');
        num = -num;
    }
    if (num == 0) {
        my_putchar('0');
        return;
    }
    while (num > 0) {
        d = num % base;
        buffer[j] = (d < 10) ? (d + '0') : ('A' + d - 10);
        num /= base;
        j++;
    }
    my_put_nbr_base_bis(i, j, buffer);
}
