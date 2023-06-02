/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** draw
*/

#include "rpg.h"

static void draw_npc_close(global *all, int is_npc_open)
{
    int fight_won = all->game.fight_stats.win;
    int npc = which_npc_close(all);

    if (is_npc_close(all) && is_npc_open == 0 && fight_won == 0 && npc == 1)
        sfRenderWindow_drawText(all->window, all->game.npc.ragnar_talk, NULL);
    if (is_npc_close(all) && is_npc_open == 0 && npc == 2)
        sfRenderWindow_drawText(all->window, all->game.npc.lucien_hello, NULL);
    if (is_npc_close(all) && is_npc_open == 0 && npc == 3)
        sfRenderWindow_drawText(all->window, all->game.npc.alys_hello, NULL);
    if (is_npc_close(all) && is_npc_open == 0 && npc == 4 &&
        all->inventory.sword == 1)
        sfRenderWindow_drawText(all->window, all->game.npc.boss_hello, NULL);
}

void draw_game(global *all, int is_npc_open)
{
    sfRenderWindow_drawSprite(WINDOW, sMap.sprite, NULL);
    if (is_structure(all)) {
        sfRenderWindow_drawSprite(WINDOW, sVillage.sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, sPlayer.sprite, NULL);
    } else {
        sfRenderWindow_drawSprite(WINDOW, sPlayer.sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, sVillage.sprite, NULL);
    }
    draw_npc_close(all, is_npc_open);
    firecamp_particles(all);
    tree_particles(all);
    sfTexture_updateFromPixels(iBUFFER.texture, iFBUFFER->pixel, BUFFSIZE);
    sfRenderWindow_drawSprite(all->window, all->game.f_buffer.sprite, NULL);
    clear_framebuffer(all);
}
