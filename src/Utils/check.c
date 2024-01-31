/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** check
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "ai.h"

int check(void)
{
    char *check = NULL;
    size_t size;

    getline(&check, &size, stdin);
    if (strstr(check, "KO") != NULL) {
        free(check);
        return 1;
    } else {
        free(check);
        return 0;
    }
}
