/*
** EPITECH PROJECT, 2017
** display.c
** File description:
** displaying in the 90's
*/

#include "include/my.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height) 
{
	framebuffer_t *pointer = malloc(sizeof(framebuffer_t));
	pointer->width = width;
	pointer->height = height;
	pointer->pixels = malloc(width * height * 4);
	return(pointer);
}

int my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color)
{
	if (x > 799 || y > 599 || x < 1 || y < 1)
		return (ERROR);
	buffer->pixels[4*(y*buffer->width+x)] = color.r;
	buffer->pixels[4*(y*buffer->width+x)+1] = color.g;
	buffer->pixels[4*(y*buffer->width+x)+2] = color.b;
	buffer->pixels[4*(y*buffer->width+x)+3] = color.a;
	return (EXIT);
}
 
int my_put_line(framebuffer_t *buffer, sfColor color, int x0, int x1)
{
	int y0 = safe_random_y();
	int y1 = safe_random_y();
	int dx = abs(x1-x0);
	int sx = x0<x1 ? 1 : -1;
	int dy = abs(y1-y0);
	int sy = y0<y1 ? 1 : -1; 
	int err = (dx>dy ? dx : -dy)/2;
	int e2;
	
	while (1) {
		my_put_pixel(buffer, x0, y0, color);
		if (x0==x1 && y0==y1) 
			return (EXIT);
		e2 = err;
		if (e2 >-dx) { 
			err -= dy; 
			x0 += sx;
		}
		if (e2 < dy) {
			err += dx; 
			y0 += sy;
		}
	}
}

int safe_random_x()
{
	int z = rand();

	while(z > 800)
		z = rand();
	return(z);
}

int safe_random_y()
{
	int z = rand();

	while(z > 600)
		z = rand();
	return(z);
}