/*
** EPITECH PROJECT, 2022
** my main game
** File description:
** desc
*/

#include "rpg.h"

static void is_pause(global *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        my_pause(all);
    if (is_npc_close(all) && sfKeyboard_isKeyPressed(sfKeyE)) {
        sfRenderWindow_clear(WINDOW, sfWhite);
        draw_game(all, 1);
    }
}

static void reset_hp(global *all)
{
    sfVector2f full_hp = {1, 1};

    sfSprite_setScale(iFight[7].sprite, full_hp);
    sfSprite_setScale(iFight[6].sprite, full_hp);
}

static void npc_interact(global *all)
{
    int fight_won = all->game.fight_stats.win;
    int npc = which_npc_close(all);

    if (sfKeyboard_isKeyPressed(sfKeyE) && is_npc_close(all) &&
        fight_won == 0 && npc == 1)
        speak_ragnar(all);
    if (sfKeyboard_isKeyPressed(sfKeyE) && is_npc_close(all) &&
        fight_won == 1 && npc == 1) {
        reset_hp(all);
        fight(all);
        }
    if (sfKeyboard_isKeyPressed(sfKeyE) && is_npc_close(all) &&
        npc == 2)
        speak_lucien(all);
    if (sfKeyboard_isKeyPressed(sfKeyE) && is_npc_close(all) &&
        npc == 3 && all->inventory.letter == 1)
        speak_alys(all);
    if (sfKeyboard_isKeyPressed(sfKeyE) && is_npc_close(all) &&
        npc == 4 && all->inventory.sword == 1)
        speak_boss(all);
}

static void game_event(global *all)
{
    while (sfRenderWindow_pollEvent(WINDOW, &EVENT))
        if (EVENT.type == sfEvtClosed)
            sfRenderWindow_close(WINDOW);
    if (sfKeyboard_isKeyPressed(sfKeyI))
        inventory(all);
    npc_interact(all);
    is_pause(all);
}

int game(global *all)
{
    sfMusic_play(all->game.my_music.music);
    while (sfRenderWindow_isOpen(WINDOW)) {
        game_event(all);
        movements(all);
        sfRenderWindow_clear(WINDOW, sfWhite);
        draw_game(all, 0);
        sfRenderWindow_display(WINDOW);
    }
    return 0;
}
