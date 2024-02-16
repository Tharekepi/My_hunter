/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-tharek.akaichi
** File description:
** my_is_prime.c
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
        return 0;
    if (nb <= 3)
        return 1;
    for (int i = 5; i * i <= nb; i += 6) {
        if (nb % i == 0 || nb % (i + 2) == 0)
            return 0;
    }
    return 1;
}
