/*
** EPITECH PROJECT, 2023
** LIB
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <string.h>

static int get_nb_of_word(char const *str, const char separator)
{
    int words = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator || str[i + 1] == '\0')
            words++;
    }
    return words;
}

static int get_length(char const *str, const char separator, int index)
{
    int max = strlen(str);
    int length = 0;
    int i;

    for (i = index; str[i] != separator; i++) {
        if (i >= max)
            break;
        length++;
    }

    return length;
}

static char *get_actual_word(char const *str, int length, int index)
{
    int i;
    char *word = malloc(sizeof(char) * (length + 1));

    for (i = 0; i < length; i++)
        word[i] = str[i + index];

    word[i] = '\0';
    return word;
}

char **my_strtowarray(char const *str, const char separator)
{
    int max = strlen(str);
    int words = get_nb_of_word(str, separator);
    int character = 0;
    int place = 0;
    char *actual_word;
    char **warray = malloc(sizeof(char *) * (words + 1));

    warray[words] = NULL;

    for (int i = 0; i < max; i += character + 1) {
        character = get_length(str, separator, i);
        actual_word = get_actual_word(str, character, i);
        warray[place] = malloc(sizeof(char) * (character + 1));
        strcpy(warray[place], actual_word);
        free(actual_word);
        place++;
    }
    return warray;
}
