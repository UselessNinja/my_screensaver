/*
** EPITECH PROJECT, 2017
** strlen
** File description:
** non
*/

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}