/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** loop
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "ai.h"

int loop(void)
{
    char **lidar;
    char *line = NULL;
    size_t size = 0;

    dprintf(1, LIDAR);
    getline(&line, &size, stdin);
    lidar = my_strtowarray(line, ':');

    if (set_speed(lidar, line) == 1 || set_turn(lidar, line) == 1) {
        free_array(lidar);
        free(line);
        return 1;
    } else {
        free_array(lidar);
        free(line);
        return 0;
    }
}
