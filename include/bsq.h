/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** bsq_h
*/

#ifndef BSQ_H
    #define BSQ_H

    typedef struct cords_sizes t_corsz;
    struct cords_sizes {
    int o_l;
    int o_c;
    int n_size;
    int size;
    int total_cols;
    };

int get_map(char const *filepath);
void create_buffer(int rtf, int size, char *BUFF);
int check_err(int rtf, int rsf, int rdf);
void conv_str_to_arr(char *array, int size);
void get_char_array(char *array, char **t, int lines, int cols);
void conv_in_int(char **t, int lines, int cols);
int ignore_line_rt(char c);
void search_in_bsq(char **table, int **t, int lines, int cols);
void find_bsq_cords(int **t, t_corsz *cosz, int l, int c);
void print_in_array(char **t, t_corsz *cosz, int lines);
int get_cord(int size, int tp_size, int new_cord, int cord);
int translate_in_array(char c);
int check_size(int size, int tp_size);
int get_min(char b, char c, char d);

#endif
