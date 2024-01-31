/*
** EPITECH PROJECT, 2023
** n4s
** File description:
** ai.h
*/

#ifndef _AI_H
    #define _AI_H

    #define EXIT_SUCCESS 0
    #define EXIT_FAIL 84

    #define START "start_simulation\n"
    #define STOP "stop_simulation\n"
    #define LIDAR "get_info_lidar\n"
    #define FINISH "Track Cleared"
    #define WHEELS "wheels_dir:"
    #define FWD "car_forward:"

    /*Engine*/
    int n4s_engine(void);
    int loop(void);

    /*Movement*/
    int set_speed(char **lidar, char *line);
    int set_turn(char **lidar, char *line);

    /*Utils*/
    void free_array(char **array);
    int check(void);

    /*LIB*/
    char **my_strtowarray(char const *str, const char separator);

#endif /* !_AI_H */
