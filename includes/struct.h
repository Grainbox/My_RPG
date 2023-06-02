/*
** EPITECH PROJECT, 2022
** STRUCT_H_
** File description:
** desc
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include "main_menu.h"
    #include "inventory_struct.h"
    #include "main_game.h"
    #include "setting_struct.h"

    typedef struct global {
        sfRenderWindow* window;
        main_menu_struct main_menu;
        main_game_struct game;
        s_inventory inventory;
        setting_s setting;
    } global;

#endif
