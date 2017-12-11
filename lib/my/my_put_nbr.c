/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** to;do
*/
#include "my.h"

int my_put_nbr(int nb);

int my_put_nbr(int nb)
{
	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb < 10)
		my_putchar(nb + '0');
	else {
		my_put_nbr(nb / 10);
		my_putchar(nb % 10 + '0');
	}
	return (0);		
}
