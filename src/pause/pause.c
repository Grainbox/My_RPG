/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** pause
*/

#include "rpg.h"
#include <stdbool.h>
#include <unistd.h>

static void is_event(global *all, int *resume)
{
    while (sfRenderWindow_pollEvent(all->window, &all->game.event)) {
        if (all->game.event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
        is_resume_clicked(all, resume);
        is_status_clicked(all, resume);
        is_setting_clicked(all, resume);
        is_quit_clicked(all);
        is_back_clicked(all);
    }
}

static void draw_window(global *all)
{
    for (int i = 0; i < 6; i++)
        sfRenderWindow_drawSprite(all->window, iPause[i].sprite, NULL);
}

int my_pause(global *all)
{
    int resume = 0;

    my_wait(0.2);
    while (sfRenderWindow_isOpen(all->window)) {
        is_event(all, &resume);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) || resume == 1) {
            my_wait(0.2);
            break;
        }
        draw_window(all);
        sfRenderWindow_display(all->window);
    }
    return 0;
}
