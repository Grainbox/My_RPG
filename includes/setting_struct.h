/*
** EPITECH PROJECT, 2022
** Mathieu Rio
** File description:
** setting
*/

#ifndef SETTING_H_
    #define SETTING_H_

    typedef struct setting_img {
        sfTexture *texture;
        sfSprite *sprite;
        float size_x;
        float size_y;
        int pos_x;
        int pos_y;
    } setting_img;

    typedef struct musique {
        sfMusic *music;
        float level;
    } musique;

    typedef struct setting_s {
        setting_img *img;
        int display;
        musique msc;
    } setting_s;

#endif
