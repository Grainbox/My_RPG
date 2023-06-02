/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** speak
*/

#include "rpg.h"

void draw_game_back(global *all)
{
    sfRenderWindow_drawSprite(WINDOW, sMap.sprite, NULL);
    if (is_structure(all)) {
        sfRenderWindow_drawSprite(WINDOW, sVillage.sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, sPlayer.sprite, NULL);
    } else {
        sfRenderWindow_drawSprite(WINDOW, sPlayer.sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, sVillage.sprite, NULL);
    }
}

static void next_quest(global *all, int dial) {
    char *str = malloc(sizeof(char) * 200);
    sfVector2f pos = {400, 850};
    char *text1 = "Je t'aurais bien donne une lame avec ca, mais\nla cargaiso";
    char *text2 = "n n'est pas encore arrivee.\nPrends cette lettre et va ";
    char *text3 = "l'intercepter au sud.";

    if (dial == 3) {
        my_sprintf(text1, str);
        my_strcat(str, text2);
        my_strcat(str, text3);
        sfRenderWindow_drawSprite(WINDOW, iFight[3].sprite, NULL);
        sfText_setString(all->game.npc.ragnar_hello, str);
        sfText_setPosition(all->game.npc.ragnar_hello, pos);
        sfRenderWindow_drawText(WINDOW, all->game.npc.ragnar_hello, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.fight[1].text, NULL);
    }
    free(str);
}

static void draw_after_fight(global *all, int dial)
{
    char *str = malloc(sizeof(char) * 200);
    sfVector2f pos = {400, 850};
    char *text1 = "Ok, tu t'es bien debrouille contre le gluant,\npar contre,";
    char *text2 = " ta defense pourrait etre meilleure,\nprends ce bouclier..";
    char *text3 = ".\nOuvre ton sac a dos avec 'I'";

    if (dial == 2) {
        my_sprintf(text1, str);
        my_strcat(str, text2);
        my_strcat(str, text3);
        sfRenderWindow_drawSprite(WINDOW, iFight[3].sprite, NULL);
        sfText_setString(all->game.npc.ragnar_hello, str);
        sfText_setPosition(all->game.npc.ragnar_hello, pos);
        sfRenderWindow_drawText(WINDOW, all->game.npc.ragnar_hello, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.fight[1].text, NULL);
    }
    free(str);
}

static void draw_texts(global *all, int dial)
{
    char *str = "Veux-tu combattre un gluant ?";
    sfVector2f pos = {660, 850};

    draw_game_back(all);
    if (dial == 0) {
        init_ragnar_dialogue(all);
        sfRenderWindow_drawSprite(WINDOW, iFight[3].sprite, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.fight[1].text, NULL);
        sfRenderWindow_drawText(WINDOW, all->game.npc.ragnar_hello, NULL);
    } else if (dial == 1 && all->game.fight_stats.win == 0) {
        sfRenderWindow_drawSprite(WINDOW, iFight[3].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, all->game.npc_img[0].sprite, NULL);
        sfText_setString(all->game.npc.ragnar_hello, str);
        sfText_setPosition(all->game.npc.ragnar_hello, pos);
        sfRenderWindow_drawText(WINDOW, all->game.npc.ragnar_hello, NULL);
    } else {
        draw_after_fight(all, dial);
        next_quest(all, dial);
    }
}

static int is_event(global *all, int dial)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    while (sfRenderWindow_pollEvent(all->window, &all->game.event))
        if (all->game.event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
    if (dial == 1 && click) {
        if (mouse.x >= 792 && mouse.x <= 904 && mouse.y >= 916 &&
            mouse.y <= 974) {
            fight(all);
            my_wait(0.1);
        }
        if (mouse.x >= 1025 && mouse.x <= 1147 && mouse.y >= 919 &&
            mouse.y <= 976)
            return 2;
    }
    return 0;
}

void speak_ragnar(global *all)
{
    int dial = 0;
    int event = 0;
    int win = 0;

    my_wait(0.2);
    while (sfRenderWindow_isOpen(all->window)) {
        win = all->game.fight_stats.win;
        sfRenderWindow_clear(all->window, sfWhite);
        if ((event = is_event(all, dial)) == 2)
            break;
        draw_texts(all, dial);
        increment_dial(&dial, win);
        if (sfKeyboard_isKeyPressed(sfKeySpace) && dial == 3)
            break;
        sfRenderWindow_display(all->window);
    }
    if (all->game.fight_stats.win == 1) {
        all->inventory.shield = 1;
        all->inventory.letter = 1;
    }
}
