/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** put_pixel
*/

#include "rpg.h"

void put_pixel(global *all, int x, int y, sfColor color)
{
    int width = all->game.f_buffer.framebuffer->width;
    int pixel = ((width * (y - 1)) + x) * 4;

    all->game.f_buffer.framebuffer->pixel[pixel] = color.r;
    all->game.f_buffer.framebuffer->pixel[pixel + 1] = color.g;
    all->game.f_buffer.framebuffer->pixel[pixel + 2] = color.b;
    all->game.f_buffer.framebuffer->pixel[pixel + 3] = color.a;
}
