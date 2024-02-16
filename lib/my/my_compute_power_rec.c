/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-tharek.akaichi
** File description:
** my_compute_power_rec.c
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    int fact;

    if (p < 0 || p > 12)
        return 0;
    else if (p == 0)
        return 1;
    else
        fact = nb * my_compute_power_rec(nb, p - 1);
    return fact;
}
