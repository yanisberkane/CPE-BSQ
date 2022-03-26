/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** find_biggest_square
*/

#include "include/my.h"
#include "include/bsq.h"
#include <unistd.h>
#include <stdlib.h>

int ignore_line_rt(char c)
{
    if (c == '\n')
        return 1;
    return 0;
}

void conv_in_int(char **t, int lines, int cols)
{
    int **it;

    it = malloc(sizeof(int *) * (lines + 1));
    for (int i = 0; i < lines; i++)
        it[i] = malloc(sizeof(int) * (cols + 1));
    for (int l = 0; l < lines; l++) {
        for (int c = 0; c < cols; c++) {
            it[l][c] = translate_in_array(t[l][c]);
        }
    }
    search_in_bsq(t, it, lines, cols);
}

void get_char_array(char *array, char **t, int lines, int cols)
{
    int ind = 0;

    for (int i = 0; array[i] != '\n'; )
        array++;
    array++;
    for (int l = 0; l < lines; l++) {
        for (int c = 0; c < cols; c++) {
            t[l][c] = array[ind];
            ind++;
            ind = ind + ignore_line_rt(array[ind]);
        }
    }
}

void conv_str_to_arr(char *array, int size)
{
    int lines = my_getnbr(array);
    int cols = (size - lines - my_strlen(isole_nbr_in_str(array))) / lines;
    char **t;

    t = malloc(sizeof(char *) * (lines + 1));
    for (int i = 0; i < lines; i++) {
        t[i] = malloc(sizeof(char) * (cols + 1));
        t[i][cols] = '\0';
    }
    t[lines] = NULL;
    get_char_array(array, t, lines, cols);
    conv_in_int(t, lines, cols);
    for (int i = 0; i < lines; i++)
        free(t[i]);
    free(t);
}
