/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** main_rpg
*/

#include "rpg.h"

void init_all(global *all)
{
    char title[] = "Border Revenge";
    sfVideoMode mode = {1920, 1080, 64};
    sfImage *image = sfImage_createFromFile("./content/background/logo.png");

    all->window = sfRenderWindow_create(mode, title, sfResize | sfClose, NULL);
    sfRenderWindow_setIcon(all->window, 32, 32, sfImage_getPixelsPtr(image));
    srand(time(NULL));
    init_game_content(all);
    init_main_menu_content(all);
    init_settings_menu_content(all);
    init_pause_content(all);
    init_status_content(all);
    init_stats_text(all);
    init_inventory_menu_content(all);
    init_collision(all, 0);
    init_ragnar_content(all);
    init_lucien_content(all);
    init_fight(all);
}

void frees(global *all)
{
    free(iPause);
    free(iGame);
    free(iMain);
    free(iFight);
    free(all->game.f_buffer.framebuffer->pixel);
    free(all->game.f_buffer.framebuffer);
    free(all->inventory.img_inv);
    free(all->game.col_house.pos1);
    free(all->game.col_house.pos2);
    free(all->game.col_house.pos3);
    free(all->game.img_status);
    sfMusic_destroy(all->game.my_music.music);
}

int main(void)
{
    GLOBAL;

    init_all(&all);
    main_menu(&all);
    sfRenderWindow_destroy(all.window);
    frees(&all);
    return 0;
}
