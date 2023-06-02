/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** pause2
*/

#include "rpg.h"
#include <stdbool.h>
#include <unistd.h>

void is_resume_clicked(global *all, int *resume)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (click && mouse.x >= 170 && mouse.x <= 535 && mouse.y >= 216 &&
        mouse.y <= 273)
        *resume = 1;
}

void is_status_clicked(global *all, int *resume)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (click && mouse.x >= 174 && mouse.x <= 535 && mouse.y >= 355 &&
        mouse.y <= 415)
        my_status(all, resume);
}

void is_setting_clicked(global *all, int *resume)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (click && mouse.x >= 174 && mouse.x <= 533 && mouse.y >= 495 &&
        mouse.y <= 553)
        setting(all, resume);
}

void is_back_clicked(global *all)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (click && mouse.x >= 227 && mouse.x <= 459 && mouse.y >= 635 &&
        mouse.y <= 691) {
        sfMusic_stop(all->game.my_music.music);
        main_menu(all);
    }
}

void is_quit_clicked(global *all)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (click && mouse.x >= 229 && mouse.x <= 462 && mouse.y >= 766 &&
        mouse.y <= 827) {
        sfMusic_stop(all->game.my_music.music);
        sfRenderWindow_close(all->window);
    }
}
