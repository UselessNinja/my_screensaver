/*
** EPITECH PROJECT, 2017
** my_putstr_S.c
** File description:
** <3
*/
#include "my.h"

int my_putstr_s(char const *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] < 32 || str[i] > 126) {
			my_putchar('\\');
			if (str[i] <= 7)
				dispinf8(str[i]);
			if (str[i] > 7 && str[i] <= 15)
				dispfor10(str[i]);
			if (str[i] > 15 && str[i] <= 23)
				dispfor20(str[i]);
			if (str[i] > 23 && str[i] <= 31)
				dispfor30(str[i]);
			if (str[i] == 127)
				my_put_nbr(177);
		} else
			my_putchar(str[i]);
	}
	return (0);
}

void dispinf8(int str)
{
	my_putchar('0');
	my_putchar('0');
	my_put_nbr(str);
}

void dispfor10(int str)
{
	my_putchar('0');
	my_put_nbr(str + 2);
}

void dispfor20(int str)
{
	my_putchar('0');
	my_put_nbr(str + 4);
}

void dispfor30(int str)
{
	my_putchar('0');
	my_put_nbr(str + 6);
}