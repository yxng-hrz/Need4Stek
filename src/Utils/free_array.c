/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** free_array
*/

#include <stdlib.h>

#include "ai.h"

void free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
