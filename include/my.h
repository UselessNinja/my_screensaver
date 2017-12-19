/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** done for the my_screensaver project
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#define ERROR 84
#define EXIT_HELP 1
#define EXIT_OPTIONS 2
#define EXIT 0

#include "SFML/Graphics.h"
#include "SFML/Audio.h"
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>

struct framebuffer {
	unsigned int width;
	unsigned int height;
	sfUint8 *pixels;
};

typedef struct framebuffer framebuffer_t;
framebuffer_t *random_lines (framebuffer_t *image);

sfColor my_rgba(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a);

#endif /* !STRUCT_H_ */
