/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-tharek.akaichi
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
