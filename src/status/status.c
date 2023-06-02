/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** status
*/

#include "rpg.h"
#include <stdbool.h>
#include <unistd.h>

static void draw_stats(global *all)
{
    char *str = malloc(sizeof(char) * 200);

    int_to_str(str, all->game.stats.level);
    sfText_setString(all->game.stats.level_txt, str);
    sfRenderWindow_drawText(all->window, all->game.stats.level_txt, NULL);
    int_to_str(str, all->game.stats.points);
    sfText_setString(all->game.stats.points_txt, str);
    sfRenderWindow_drawText(all->window, all->game.stats.points_txt, NULL);
    int_to_str(str, all->game.stats.wisdom);
    sfText_setString(all->game.stats.wisdom_txt, str);
    sfRenderWindow_drawText(all->window, all->game.stats.wisdom_txt, NULL);
    int_to_str(str, all->game.stats.strengh);
    sfText_setString(all->game.stats.strengh_txt, str);
    sfRenderWindow_drawText(all->window, all->game.stats.strengh_txt, NULL);
    free(str);
}

static void cond_draw_window(global *all)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (all->game.stats.points != 0) {
        sfRenderWindow_drawSprite(all->window, iStatus[2].sprite, NULL);
        sfRenderWindow_drawSprite(all->window, iStatus[3].sprite, NULL);
    }
    if (click && mouse.x >= 1420 && mouse.x <= 1435 && mouse.y >= 509 &&
        mouse.y <= 523 && all->game.stats.points > 0) {
        my_wait(0.2);
        all->game.stats.strengh += 1;
        all->game.stats.points -= 1;
    }
    if (click && mouse.x >= 1420 && mouse.x <= 1435 && mouse.y >= 555 &&
        mouse.y <= 569 && all->game.stats.points > 0) {
        my_wait(0.2);
        all->game.stats.wisdom += 1;
        all->game.stats.points -= 1;
    }
}

static void draw_window(global *all)
{
    for (int i = 0; i < 2; i++)
        sfRenderWindow_drawSprite(all->window, iStatus[i].sprite, NULL);
    cond_draw_window(all);
    draw_stats(all);
}

static int is_event(global *all, int *resume)
{
    while (sfRenderWindow_pollEvent(all->window, &all->game.event))
        if (all->game.event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
    is_resume_clicked(all, resume);
    is_setting_clicked(all, resume);
    is_quit_clicked(all);
    return 0;
}

void my_status(global *all, int *resume)
{
    my_wait(0.2);
    while (sfRenderWindow_isOpen(WINDOW)) {
        if (is_event(all, resume) == 1)
            break;
        if (sfKeyboard_isKeyPressed(sfKeyEscape) || *resume == 1) {
            *resume = 1;
            my_wait(0.2);
            break;
        }
        draw_window(all);
        sfRenderWindow_display(WINDOW);
    }
}
