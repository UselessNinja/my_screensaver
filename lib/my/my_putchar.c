/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** heil
*/

void my_putchar(char c);

void my_putchar(char c)
{
	write(1, &c, 1);
}