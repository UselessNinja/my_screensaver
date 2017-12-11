/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** Kirin Tor more like Kirin Tort amiright
*/
#include "my.h"

int my_putstr(char const *str);

int my_putstr(char const *str)
{
	int i;
	i = 0;
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
