/*
** EPITECH PROJECT, 2017
** options.c
** File description:
** handling options since 1166
*/

#include "include/my.h"

int options(char *options)
{
	if (options[1] == 'h') {
		h_flag();
		return (EXIT_HELP);
	}
	if (options[1] == 'd') {
		d_flag();
		return (EXIT_OPTIONS);
	}
	return(ERROR);
}

void h_flag(void)
{
	my_putstr("Render an animation in a CSFML window");
	my_putstr("\n\nUSAGE :\n  ./my_screensaver animation_id\n");
	my_putstr("  animation_id ID of the animation to process (1 to 4)");
	my_putstr("\n\n  -d print the description of all the animations and quit\n");
	my_putstr("  -h print the usage and quit\n\n");
}

void d_flag(void)
{
	my_putstr("animation_id list :\n\n");
	my_putstr("  1 - Disco Fever : Print lines to a random location and with a random color\n");
	my_putstr("  2 - Night Sky : Print a night sky\n");
	my_putstr("  3 - Retro Square : Print colorful square randomly\n");
	my_putstr("  4 - Bubble : Print blue circles randomly\n\n");
}