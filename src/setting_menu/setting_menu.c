/*
** EPITECH PROJECT, 2022
** my main
** File description:
** desc
*/

#include <unistd.h>
#include <stdbool.h>
#include "rpg.h"

int back(global *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);

    if (mouse.y <= 838 && mouse.y >= 784 && mouse.x >= 1290 && \
    mouse.x <= 1604)
        return true;
    return false;
}

static void event_settings(global *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(WINDOW);
    int act = 0;
    int x = 0;
    sfVector2f pos = {0, 0};

    if (mouse.y <= 378 && mouse.y >= 340 && mouse.x >= 586 && \
    mouse.x <= 1388) {
        act = mouse.x - 586;
        all->game.my_music.level = 100 * act / 802;
        sfMusic_setVolume(all->game.my_music.music, all->game.my_music.level);
        x = ((all->game.my_music.level * 802) + 586) / 100;
        pos.x = x;
        pos.y = 300;
        sfSprite_setPosition(iSet[1].sprite, pos);
    }
}

static void draw_menu(global *all)
{
    sfRenderWindow_drawSprite(WINDOW, iSet[1].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, iSet[0].sprite, NULL);
}

static void check_main_event(global *all)
{
    while (sfRenderWindow_pollEvent(WINDOW, &all->main_menu.event)) {
        if (all->main_menu.event.type == sfEvtClosed)
            sfRenderWindow_close(WINDOW);
    }
}

int setting(global *all, int *resume)
{
    my_wait(0.2);
    while (sfRenderWindow_isOpen(WINDOW)) {
        check_main_event(all);
        draw_menu(all);
        sfRenderWindow_display(WINDOW);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            *resume = 1;
            my_wait(0.2);
            break;
        }
        sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
        if (click)
            event_settings(all);
        if (click && back(all)) {
            *resume = 1;
            break;
        }
        sfRenderWindow_clear(WINDOW, sfWhite);
    }
    return 0;
}
