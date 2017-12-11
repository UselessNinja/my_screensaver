/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** macro for the lib
*/

#ifndef MY_H
#define MY_H

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int sum_stdarg(int i, int nb, ...);
int sizelast(char *str);
int disp_stdarg(char *s, ...);
void dispfori(int str);
void dispforc(char str);
void dispfors(char *str);
int my_putstr_s(char const *str);
unsigned int my_put_nbr_unsigned(unsigned int nb);
void dispinf8(int str);
void dispfor10(int str);
void dispfor20(int str);
void dispfor30(int str);
unsigned int my_unsigned_to_binary(unsigned int str);
unsigned int my_unsigned_to_octal(unsigned int str);
unsigned int my_unsigned_to_hexa(char c, unsigned int str);
int my_printf(const char *format, ...);
void display_hexa(char *hexa, unsigned int i);
void my_arg(char c, char *str);
void my_display_pointer(char *str);
int my_strcmp(char *s1, char *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
int my_strlen(char *str);

#endif /* MY_H */