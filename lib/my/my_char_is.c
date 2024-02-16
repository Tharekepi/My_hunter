/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-tharek.akaichi
** File description:
** my_char_is.c
*/

#include "../../include/my.h"

int my_charisalpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int my_charisnum(char c)
{
    return c >= '0' && c <= '9';
}
