/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_

    typedef struct inventory_img {
        sfTexture *texture;
        sfSprite *sprite;
        float size_x;
        float size_y;
        int pos_x;
        int pos_y;
    } img_inventory;

    typedef struct inventory_struct {
        img_inventory *img_inv;
        int shield;
        int sword;
        int book;
        int letter;
    } s_inventory;

#endif
