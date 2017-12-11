/*
** EPITECH PROJECT, 2017
** my_put_nbr_unsigned.c
** File description:
** fug
*/

#include "my.h"

unsigned int my_put_nbr_unsigned(unsigned int nb)
{
	if (nb < 10)
		my_putchar(nb + '0');
	else {
		my_put_nbr_unsigned(nb / 10);
		my_putchar(nb % 10 + '0');
	}
	return (0);
}