/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init
*/

#include "rpg.h"

static void log_bar(global *all)
{
    int x = 330;
    int y = 800;
    sfVector2f scale = {2, 2};
    sfVector2f pos = {x, y};

    iGame[1].texture = sfTexture_createFromFile("./content/log_bar.png", NULL);
    iGame[1].sprite = sfSprite_create();
    sfSprite_setTexture(iGame[1].sprite, iGame[1].texture, sfTrue);
    sfSprite_setScale(iGame[1].sprite, scale);
    sfSprite_setPosition(iGame[1].sprite, pos);
}

static void init_ragnar_quest(global *all)
{
    int x = all->game.img[1].pos_x = 330;
    int y = all->game.img[1].pos_y = 800;
    sfVector2f scale = {2, 2};
    sfVector2f pos = {x, y};
    char *path = "./content/buttons/log_oui_non.png";

    iNPC[0].texture = sfTexture_createFromFile(path, NULL);
    iNPC[0].sprite = sfSprite_create();
    sfSprite_setTexture(iNPC[0].sprite, iNPC[0].texture, sfTrue);
    sfSprite_setScale(iNPC[0].sprite, scale);
    sfSprite_setPosition(iNPC[0].sprite, pos);
}

void init_ragnar_dialogue(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};
    char *text1 = "Bonjours, tu as l'air d'etre remis sur pied.\n";
    char *text2 = "Lucien m'a parle de toi.\nPret a t'entrainer ?";

    all->game.npc.ragnar_hello = sfText_create();
    my_strcpy(str, text1);
    my_strcat(str, text2);
    sfText_setFont(all->game.npc.ragnar_hello, font);
    sfText_setScale(all->game.npc.ragnar_hello, text_scale);
    sfText_setPosition(all->game.npc.ragnar_hello, pos);
    sfText_setString(all->game.npc.ragnar_hello, str);
    sfText_setColor(all->game.npc.ragnar_hello, color);
    free(str);
}

void init_ragnar_content(global *all)
{
    all->game.npc_img = malloc(sizeof(s_npc_img) * 5);
    all->game.fight_stats.win = 0;
    log_bar(all);
    init_ragnar_dialogue(all);
    init_ragnar_quest(all);
}
