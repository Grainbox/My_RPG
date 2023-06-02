/*
** EPITECH PROJECT, 2022
** my main
** File description:
** desc
*/

#include <unistd.h>
#include "rpg.h"

static void if_click(global *all, int *exit)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (mouse.x >= 816 && mouse.x <= 1062)
        if (mouse.y >= 526 && mouse.y <= 594)
            game(all);
    if (mouse.x >= 802 && mouse.x <= 1070 &&
        mouse.y >= 662 && mouse.y <= 746)
        *exit = 1;
}

static void draw(global *all)
{
    sfRenderWindow_drawSprite(WINDOW, iMain[0].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, iMain[1].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, iMain[2].sprite, NULL);
}

static void check_main_event(global *all, int *exit)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);

    while (sfRenderWindow_pollEvent(all->window, &all->main_menu.event)) {
        if (all->main_menu.event.type == sfEvtClosed || *exit == 1)
            sfRenderWindow_close(WINDOW);
        if (click)
            if_click(all, exit);
    }
}

int main_menu(global *all)
{
    int exit = 0;

    while (sfRenderWindow_isOpen(WINDOW)) {
        check_main_event(all, &exit);
        sfRenderWindow_clear(WINDOW, sfWhite);
        draw(all);
        sfRenderWindow_display(WINDOW);
    }
    return 0;
}
