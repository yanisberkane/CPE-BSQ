/*
** EPITECH PROJECT, 2021
** fs_print_first_line
** File description:
** Display first line of a file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "include/my.h"
#include "include/bsq.h"
#include <stdlib.h>

int check_err(int rtf, int rsf, int rdf)
{
    if (rtf == -1) {
        my_putstr_err("FAILURE\n");
        return ERROR;
    }
    if (rsf == -1) {
        my_putstr_err("FAILURE\n");
        return ERROR;
    }
    if (rdf == -1) {
        my_putstr_err("FAILURE\n");
        return ERROR;
    }
    return 0;
}

void create_buffer(int rtf, int size, char *BUFF)
{
    char *array;

    if (rtf != -1) {
        array = malloc(sizeof(char) * (size + 1));
        array[size] = '\0';
        for (int i = 0; BUFF[i] != '\0'; i++)
            array[i] = BUFF[i];
        conv_str_to_arr(array, size);
        free(array);
        close(rtf);
    }
}

int get_map(char const *filepath)
{
    int rtf = 0;
    int rdf = 0;
    int rsf = 0;
    int size = 0;
    struct stat buffer;
    char *BUFF;

    rtf = open(filepath, O_RDONLY);
    rsf = stat(filepath, &buffer);
    size = buffer.st_size;
    BUFF = malloc(size + 1);
    rdf = read(rtf, BUFF, size);
    BUFF[size] = '\0';
    rsf = check_err(rtf, rsf, rdf);
    if (size < 4)
        return 84;
    create_buffer(rtf, size, BUFF);
    free(BUFF);
    return rsf;
}
