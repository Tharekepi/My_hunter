/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-tharek.akaichi
** File description:
** my_putstr.c
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}

void print_error(const char *message)
{
    write(STDERR_FILENO, message, my_strlen(message));
}
