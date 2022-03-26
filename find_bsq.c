/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** find_bsq function
*/

#include "include/my.h"
#include "include/bsq.h"
#include <unistd.h>
#include <stdlib.h>

int get_cord(int size, int tp_size, int new_cord, int cord)
{
    if (tp_size > size) {
        return new_cord;
    }
    if (tp_size <= size) {
        return cord;
    }
    return cord;
}

void print_in_array(char **t, t_corsz *cosz, int lines)
{
    int min_cordl = cosz->o_l - cosz->size + 1;
    int min_cordc = cosz->o_c - cosz->size + 1;

    for (int i = min_cordl; i <= cosz->o_l; i++) {
        for (int j = min_cordc; j <= cosz->o_c; j++) {
            t[i][j] = 'x';
        }
    }
    for (int d = 0; t[d] != NULL; d++) {
        if (lines == 1) {
            my_putstr(t[d]);
        } else {
            write(1, t[d], cosz->total_cols);
        }
        my_putchar('\n');
    }
}

void find_bsq_cords(int **t, t_corsz *cosz, int l, int c)
{
    if (t[l][c] == 1 && t[l][c] != 0) {
        if (l == 0 && c == 0) {
            t[l][c] = get_min(0, 0, 0);
        } else if (l == 0) {
            t[l][c] = get_min(t[l][c - 1], 0, 0);
        } else if (c == 0) {
            t[l - 1][c - 1] = get_min(0, t[l - 1][c], 0);
        } else if (c != 0 && l != 0) {
            t[l][c] = get_min(t[l][c - 1], t[l - 1][c], t[l - 1][c - 1]);
        }
        cosz->n_size = t[l][c];
        cosz->o_l = get_cord(cosz->size, cosz->n_size, l, cosz->o_l);
        cosz->o_c = get_cord(cosz->size, cosz->n_size, c, cosz->o_c);
        cosz->size = check_size(cosz->size, cosz->n_size);
    }
}

void search_in_bsq(char **table, int **t, int lines, int cols)
{
    t_corsz cosz;

    cosz.size = 0;
    cosz.total_cols = cols;
    for (int l = 1; l <= lines; l++) {
        for (int c = 1; c <= cols; c++) {
            find_bsq_cords(t, &cosz, l - 1, c - 1);
        }
    }
    print_in_array(table, &cosz, lines);
}
