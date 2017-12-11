/*
** EPITECH PROJECT, 2017
** my_screensaver
** File description:
** done for the my_screensaver project
*/

#include "include/my.h"

int main (int ac, char **av)
{
	int h = 0;

	if (ac != 2)
		return (ERROR);
	if (av[1][0] == '-') {
		h = options(av[1]);
		if (h == EXIT_HELP || h == EXIT_OPTIONS)
			return (EXIT);
		if (h == ERROR)
			return (ERROR);
		return (ERROR);
	}
	h = animation_id(av[1]);
	if (h == ERROR)
		return (ERROR);
	if (h == EXIT)
		return (EXIT);
}

int animation_id (char *animation_id)
{
	if (animation_id[0] == '1') {
		pattern_alpha();
		return (EXIT);
	}
	if (animation_id[0] == '2') {
		pattern_beta();
		return (EXIT);
	}
	if (animation_id[0] == '3') {
		pattern_delta();
		return(EXIT);
	}
	if (animation_id[0] == '4') {
		pattern_epsilon();
		return(EXIT);
	}
	return (ERROR);
}