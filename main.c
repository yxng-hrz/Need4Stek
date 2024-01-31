/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** main.c
*/

#include "ai.h"

int main(int ac, char **av)
{
    if (ac != 1)
        return EXIT_FAIL;
    else
        return n4s_engine();
}
