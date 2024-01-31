/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** ai.c
*/

#include <stdio.h>

#include "ai.h"

int n4s_engine(void)
{
    dprintf(1, START);
    if (check() == 1)
        return EXIT_FAIL;

    while (1) {
        if (loop() == 1)
            break;
    }
    dprintf(1, STOP);
    if (check() == 1)
        return EXIT_FAIL;
    return EXIT_SUCCESS;
}
