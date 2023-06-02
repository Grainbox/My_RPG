/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** fight
*/

#include "rpg.h"

static void is_event(global *all)
{
    while (sfRenderWindow_pollEvent(all->window, &all->game.event)) {
        if (all->game.event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
    }
}

static void draw_window(global *all)
{
    if (all->game.fight_stats.fight == 4)
        return;
    for (int i = 0; i < 8; i++)
        sfRenderWindow_drawSprite(all->window, iFight[i].sprite, NULL);
    if (all->game.fight_stats.fight == 0) {
        sfRenderWindow_drawText(all->window, all->game.fight[1].text, NULL);
        sfRenderWindow_drawText(all->window, all->game.fight[0].text, NULL);
    } else
        fight_process(all);
}

static void skip(global *all)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) &&
        all->game.fight_stats.fight == 0) {
        all->game.fight_stats.fight = 1;
        my_wait(0.2);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) &&
        all->game.fight_stats.fight == 2 &&
        all->game.fight_stats.attack == 0) {
        all->game.fight_stats.fight = 3;
        my_wait(0.2);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) &&
        all->game.fight_stats.fight == 3 &&
        all->game.fight_stats.attacked == 1) {
        all->game.fight_stats.fight = 1;
        all->game.fight_stats.attacked = 0;
        my_wait(0.2);
    }
}

static void after_fight(global *all, int win)
{
    if (win == 2) {
        frees(all);
        init_all(all);
        game(all);
    }
}

void boss_fight(global *all)
{
    int win = 0;

    init_boss_values(all);
    my_wait(0.2);
    while (sfRenderWindow_isOpen(all->window)) {
        is_event(all);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            my_wait(0.2);
            break;
        }
        if ((win = is_win_loose(all)) != 0)
            break;
        draw_window(all);
        skip(all);
        sfRenderWindow_display(all->window);
    }
    after_fight(all, win);
}
