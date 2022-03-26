/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** calculate_matix
*/

#include "include/my.h"
#include "include/bsq.h"
#include <unistd.h>
#include <stdlib.h>

int get_min(char b, char c, char d)
{
    if (b <= c && b <= d)
        return (b + 1);
    if (c <= d && c <= b)
        return (c + 1);
    if (d <= b && d <= c)
        return (d + 1);
    return 0;
}

int check_size(int size, int tp_size)
{
    if (tp_size > size) {
        return tp_size;
    }
    return size;
}

int translate_in_array(char c)
{
    if (c == '.')
        return 1;
    if (c == 'o')
        return 0;
    return 0;
}
