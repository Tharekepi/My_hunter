/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-tharek.akaichi
** File description:
** my_str_isalpha.c
*/

int my_isalpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int my_str_isalpha(const char *str)
{
    if (str == 0)
        return 0;
    while (*str != '\0') {
        if (!my_isalpha(*str))
            return 0;
        str++;
    }
    return 1;
}
