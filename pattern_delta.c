/*
** EPITECH PROJECT, 2017
** pattern_delta
** File description:
** omega>delta
*/

#include "include/my.h"

void my_put_square(framebuffer_t *image, int x0, int y0, sfColor color)
{
	int radius = safe_radius();
	int f = 1;
	int fx = 0;
	int fy = -2 * radius;
	int x = 0;
	int y = radius;

	my_put_pixel(image, x0, y0 + radius, color);
	my_put_pixel(image, x0, y0 - radius, color);
	my_put_pixel(image, x0 + radius, y0, color);
	my_put_pixel(image, x0 - radius, y0, color);
	while (x < y) {
		fycalc(y, fy, f);
		x++;
		fx += 2;
		f += fx - 1;
		my_put_pixel(image, x0 + x, y0 + y, color);
		my_put_pixel(image, x0 - x, y0 + y, color);
		my_put_pixel(image, x0 + x, y0 - y, color);
		my_put_pixel(image, x0 - x, y0 - y, color);
		my_put_pixel(image, x0 + y, y0 + x, color);
		my_put_pixel(image, x0 - y, y0 + x, color);
		my_put_pixel(image, x0 + y, y0 - x, color);
		my_put_pixel(image, x0 - y, y0 - x, color);
	}
}

int safe_radius (void)
{
	int z = rand();

	while (z > 250)
		z = rand();
	return (z);
}

int fycalc (int y, int fy, int f)
{
	if (f >= 0) {
		y--;
		fy += 2;
		f += fy;
	}
	return (y, fy, f);
}

void pattern_delta (void)
{
	framebuffer_t* image = framebuffer_create(800, 600);
	sfVideoMode mode = {800, 600, 32};
	sfRenderWindow* window;
	sfTexture* texture = sfTexture_create(800, 600);
	sfTexture_updateFromPixels(texture, image->pixels, image->width, image->height, 0, 0);
	sfSprite* sprite = sfSprite_create();
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfTexture_updateFromPixels(texture, image->pixels, image->width, image->height, 0, 0);	
	sfEvent event;
	window = sfRenderWindow_create(mode, "my_screensaver", sfResize | sfClose, NULL);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if(event.type == sfEvtClosed)
				sfRenderWindow_close(window);
			}
		sfColor random = my_rgba(rand(), rand(), rand(), rand());
		my_put_square(image, safe_random_x(), safe_random_y(), random);
		sfTexture_updateFromPixels(texture, image->pixels, image->width, image->height, 0, 0);
		sfRenderWindow_drawSprite(window, sprite, NULL);
		sfRenderWindow_display(window);
	}
}