/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_str_isprintable.c
*/

int my_str_isprintable(char const *str)
{
    if (str == "")
        return 0;
    while (*str) {
        if (*str < 32 || *str >= 127)
            return 0;
        str++;
    }
    return 1;
}
