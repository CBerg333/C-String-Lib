#ifndef STRLIB_H
#define STRLIB_H


int all_letters(char *s);
void capitalize(char *s);
char *dedup(char *s);
int diff(char *s1, char *s2);
int ends_with_ignore_case(char *s, char *suff);
int find(char *h, char *n);
int isEmpty(char *s);
int len_diff(char *s1, char *s2);
int num_in_range(char *s1, char b, char t);
char *pad(char *s, int d);
char *ptr_to(char *h, char *n);
char *repeat(char *s, int x, char sep);
void rm_left_space(char *s);
void rm_right_space(char *s);
void rm_space(char *s);
void shorten(char *s, int new_len);
char *str_connect(char **strs, int n, char c);
char* str_zip(char *s1, char *s2);
int strcmp_ign_case(char *s1, char *s2);
void take_last(char *s, int n);

#endif