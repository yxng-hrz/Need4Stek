/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** set_turn.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ai.h"

static float get_value(float mid)
{
    float inclination = 0;

    if (mid >= 200) {
        inclination = 0.3;
        if (mid >= 400)
            inclination = 0.2;
        if (mid >= 600)
            inclination = 0.1;
        if (mid >= 1000)
            inclination = 0.05;
        if (mid >= 1500)
            inclination = 0.005;
    } else {
        inclination = 0.6;
        if (mid <= 100)
            inclination = 1.0;

    }

    return inclination;
}

int set_turn(char **lidar, char *line)
{
    float value = atof(lidar[3]) - atof(lidar[34]);
    float mid = atof(lidar[18]);
    size_t size = 0;

    dprintf(1, WHEELS);
    if (value <= -1)
        dprintf(1, "-");

    dprintf(1, "%f\n", get_value(mid));
    getline(&line, &size, stdin);
    if (strstr(line, FINISH) != NULL)
        return 1;

    return 0;
}
