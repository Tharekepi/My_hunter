/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-tharek.akaichi
** File description:
** my_compute_square_root.c
*/

#include "../../include/my.h"

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0)
        return -1;
    while (i * i <= nb) {
        if (i * i == nb)
            return i;
        i++;
    }
    return -1;
}
