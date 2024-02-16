/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-tharek.akaichi
** File description:
** my_getnbr.c
*/

#include "../../include/my.h"

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int calculate_max_int_size(void)
{
    int int_max = 1;
    int i = 0;

    while (int_max > 0 && i < 32) {
        int_max *= 2;
        i++;
    }
    return i - 1;
}

int calculate_min_int_size(void)
{
    int int_min = -1;
    int i = 0;

    while ((int_min * 2) < 0 && i < 32) {
        int_min *= 2;
        i++;
    }
    return i;
}

int parse_sign(char const *str, int *index)
{
    int sign = 1;

    if (str[*index] == '-') {
        sign = -1;
        (*index)++;
    } else if (str[*index] == '+') {
        (*index)++;
    }
    return sign;
}

int my_getnbr(char const *str)
{
    int res = 0;
    int sign = 1;
    int index = 0;
    int max_int_size = calculate_max_int_size();
    int min_int_size = calculate_min_int_size();
    int num;

    sign = parse_sign(str, &index);
    while (str[index] != '\0' && !is_digit(str[index]))
        index++;
    while (str[index] != '\0' && is_digit(str[index])) {
        num = str[index] - '0';
        if ((sign == 1 && res > ((1 << (max_int_size - 1)) - 1 - num) / 10) ||
            (sign == -1 && res < ((1 << (min_int_size - 1)) + num) / 10))
            return 0;
        res = res * 10 + num;
        index++;
    }
    return res * sign;
}
