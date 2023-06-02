/*
** EPITECH PROJECT, 2022
** settings_menu
** File description:
** desc
*/

#include <unistd.h>
#include "rpg.h"

static void draw_inventory_menu(global *all)
{
    sfRenderWindow_drawSprite(WINDOW, iInv[0].sprite, NULL);
    if (all->inventory.shield == 1)
        sfRenderWindow_drawSprite(WINDOW, iInv[1].sprite, NULL);
    if (all->inventory.sword == 1)
        sfRenderWindow_drawSprite(WINDOW, iInv[2].sprite, NULL);
    if (all->inventory.book == 1)
        sfRenderWindow_drawSprite(WINDOW, iInv[3].sprite, NULL);
}

static void check_main_event(global *all)
{
    while (sfRenderWindow_pollEvent(WINDOW, &all->main_menu.event))
        if (all->main_menu.event.type == sfEvtClosed)
            sfRenderWindow_close(WINDOW);
}

int inventory(global *all)
{
    my_wait(0.2);
    while (sfRenderWindow_isOpen(WINDOW)) {
        check_main_event(all);
        sfRenderWindow_clear(WINDOW, sfWhite);
        draw_inventory_menu(all);
        sfRenderWindow_display(WINDOW);
        if (sfKeyboard_isKeyPressed(sfKeyI)) {
            my_wait(0.2);
            break;
        }
    }
    return 0;
}
