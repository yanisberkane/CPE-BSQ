/*
** EPITECH PROJECT, 2021
** my_h
** File description:
** Library header
*/

#ifndef MY_H
    #define MY_H

    #define ERROR 84
    #define ERROR_MSG "error\n"
    #define FILE_ERROR_MSG "file format error\n"
    #define EXIT_USAGE    0
    #define USER_MANUAL "USAGE\n\
    ./bsq file\n\
    \n\
DESCRIPTION\n\
    file  the file that conatins the board.\n\
    GET THE BIGGEST MAP'S SQUARE!\n\
    Note :  • Its first line contains the number of lines \n\
        on the board (and only that),\n\
            • “.” (representing an empty place) and “o” (representing\n\
        an obstacle) are the only two characters for the other lines.\n\
            • All of the lines are of the same length.\n\
            • It contains at least one line.\n\
            • Each line is terminated by 'BackSlash-n'.\n"

    typedef struct elem t_elem;
    struct elem {
        int nb;
        t_elem *next;
    };

    typedef struct list t_list;
    struct list {
        t_elem *first;
    };

int my_putstr_err(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int p);
char *isole_nbr_in_str(char const *str);
int my_strcmp(char const *s1 , char const *s2);
unsigned int my_put_uns_nbr(unsigned int nb);
int my_put_capstr(char const *str);
int put_base_nbr(unsigned int nb, unsigned int base, int ad, int uol);
void my_printf(char *str, ...);
t_list *init_list(void);
void insert_list(t_list *list, int nbr);

#endif
