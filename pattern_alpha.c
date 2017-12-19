/*
** EPITECH PROJECT, 2017
** pattern_alpha
** File description:
** road to suCCess
*/

#include "include/my.h"

void pattern_alpha (void)
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
		my_put_liner(image, random, window);
		sfTexture_updateFromPixels(texture, image->pixels, image->width, image->height, 0, 0);
		sfRenderWindow_drawSprite(window, sprite, NULL);
		sfRenderWindow_display(window);
	}
}

void my_put_liner(framebuffer_t *buffer, sfColor color, sfRenderWindow* window)
{
	int x0 = safe_random_x();
	int x1 = safe_random_x();
	my_put_line(buffer, color, x0, x1);
	
}

void pattern_beta (void)
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
		sfColor random = my_rgba(247, 247, 247, rand());
		my_put_pixel(image, safe_random_x(), safe_random_y(), random);
		sfTexture_updateFromPixels(texture, image->pixels, image->width, image->height, 0, 0);
		sfRenderWindow_drawSprite(window, sprite, NULL);
		sfRenderWindow_display(window);
	}
}