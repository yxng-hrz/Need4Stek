/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** set_speed
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ai.h"

static float get_value(float mid)
{
    float speed = 0;

    if (mid >= 400) {
        speed = 0.4;
        if (mid >= 1000)
            speed = 0.5;
        if (mid >= 1500)
            speed = 0.6;
        if (mid >= 2000)
            speed = 0.7;
    } else {
        speed = 0.2;
        if (mid <= 300)
            speed = 0.1;
        if (mid <= 200)
            speed = 0.05;
    }

    return speed;
}

int set_speed(char **lidar, char *line)
{
    float mid = atof(lidar[18]);
    size_t size = 0;

    dprintf(1, FWD);
    dprintf(1, "%f\n", get_value(mid));
    getline(&line, &size, stdin);
    if (strstr(line, FINISH) != NULL)
        return 1;

    return 0;
}
