/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_sort_in_array.c
*/

void sort_bis(int *array, int size, int i, int sorted)
{
    int temp;

    if (array[i] > array[i + 1]) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        sorted = 0;
    }
}

void my_sort_int_array(int *array, int size)
{
    int sorted = 0;

    while (!sorted) {
        sorted = 1;
        for (int i = 0; i < size - 1; i++) {
            sort_bis(array, size, i, sorted);
        }
    }
}
