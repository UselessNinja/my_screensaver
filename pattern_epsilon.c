/*
** EPITECH PROJECT, 2017
** pattern_marxism
** File description:
** ayy
*/

#include "include/my.h"


void pattern_epsilon (void)
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
		sfColor random = my_rgba(0, 153, 204, rand());
		my_put_circle(image, random);
		sfTexture_updateFromPixels(texture, image->pixels, image->width, image->height, 0, 0);
		sfRenderWindow_drawSprite(window, sprite, NULL);
		sfRenderWindow_display(window);
	}
}

void my_put_circle(framebuffer_t *image, sfColor color)
{
	int xm = safe_random_x();
	int ym = safe_random_y();
	int radius = safe_radius();
	int x = -radius;
	int y = 0;
	int error = 2 - 2 * radius;

	while (x < 0) {
		my_put_pixel(image, xm - x, ym + y, color);
		my_put_pixel(image, xm - y, ym - x, color);
		my_put_pixel(image, xm + x, ym - y, color);
		my_put_pixel(image, xm + y, ym + x, color);
		radius = error;
		if (radius > x) {
			x++;
			error += x*2+1;
		}
		if (radius <= y) {
			y++;
			error += y*2+1;
		}
	}
}

sfColor my_rgba(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a)
{
	sfColor color;

	color.r = r;
	color.g = g;
	color.b = b;
	color.a = a;

	return (color);
}