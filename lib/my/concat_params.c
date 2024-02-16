/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-tharek.akaichi
** File description:
** concat_params.c
*/

#include "../../include/my.h"

char *concat_params(int argc, char **argv)
{
    char *dest;
    int dest_size = 0;
    int i = 0;
    int j = 0;

    while (i < argc) {
        dest_size = dest_size + my_strlen(argv[i]) + 1;
        i++;
    }
    dest = malloc(sizeof(char) * dest_size + 1);
    while (j < argc) {
        my_strcat(my_strcat(dest, argv[j]), "\n");
        j++;
    }
    my_strcat(dest, "\0");
    return (dest);
}

void int_to_str(int num, char *str)
{
    int temp = num;
    int length = 0;

    do {
        temp /= 10;
        length++;
    } while (temp != 0);
    str[length] = '\0';
    do {
        length--;
        str[length] = num % 10 + '0';
        num /= 10;
    } while (num != 0);
}
