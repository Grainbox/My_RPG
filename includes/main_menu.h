/*
** EPITECH PROJECT, 2022
** STRUCT_H_MAIN_MENU
** File description:
** desc
*/

#ifndef STRUCT_H_MAIN_MENU
    # define STRUCT_H_MAIN_MENU

    typedef struct image_main {
        sfTexture *texture;
        sfSprite *sprite;
        float size_x;
        float size_y;
        int pos_x;
        int pos_y;
    } image_main;

    typedef struct main_menu_struct {
        sfEvent event;
        image_main *img_main;
    } main_menu_struct;
#endif
