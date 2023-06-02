/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** speak
*/

#include "rpg.h"

static void draw_texts(global *all, int *dial)
{
    draw_game_back(all);
    if (*dial == 0) {
        init_lucien_dialogue(all);
        sfRenderWindow_drawSprite(WINDOW, iFight[3].sprite, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.fight[1].text, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.npc.lucien_talk, NULL);
    } else if (*dial == 1) {
        init_lucien_dialogue2(all);
        sfRenderWindow_drawSprite(WINDOW, iFight[3].sprite, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.fight[1].text, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.npc.lucien_talk, NULL);
    } else if (*dial == 2) {
        init_lucien_dialogue3(all);
        sfRenderWindow_drawSprite(WINDOW, iFight[3].sprite, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.fight[1].text, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.npc.lucien_talk, NULL);
    }
}

static int is_event(global *all)
{
    while (sfRenderWindow_pollEvent(all->window, &all->game.event))
        if (all->game.event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
    return 0;
}

void speak_lucien(global *all)
{
    int dial = 0;
    int event = 0;

    my_wait(0.2);
    while (sfRenderWindow_isOpen(all->window)) {
        sfRenderWindow_clear(all->window, sfWhite);
        if ((event = is_event(all)) == 1)
            break;
        draw_texts(all, &dial);
        increment_lucien_dial(&dial);
        if (dial == 3)
            break;
        sfRenderWindow_display(all->window);
    }
}
