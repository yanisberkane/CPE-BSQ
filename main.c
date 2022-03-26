/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** get_filepath
*/

#include "include/bsq.h"
#include "include/my.h"
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2) {
            write(2, ERROR_MSG, 6);
            return ERROR;
    } else {
        if (my_strcmp(argv[1], "-h") == 0) {
            my_putstr(USER_MANUAL);
        } else {
            return get_map(argv[1]);
        }
    }
    return ERROR;
}
