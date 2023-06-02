/*
** EPITECH PROJECT, 2022
** STRUCT_H_MAIN_MENU
** File description:
** desc
*/

#ifndef STRUCT_H_GAME
    # define STRUCT_H_GAME

    #define sPlayer all->game.img[2]
    #define sVillage all->game.img[3]
    #define sMap all->game.img[0]

    typedef struct framebuffer {
        int width;
        int height;
        sfUint8 *pixel;
    } framebuffer_t;

    typedef struct framebuffer_content {
        int add_camp;
        int fade_camp;
        int leaf_x;
        int leaf_y;
        int leaf_x2;
        int leaf_y2;
        int leaf_x3;
        int leaf_y3;
        sfTexture *texture;
        sfSprite *sprite;
        framebuffer_t *framebuffer;
    } framebuffer_c;

    typedef struct image {
        sfTexture *texture;
        sfSprite *sprite;
        sfImage *image;
        sfIntRect *rect;
        float size_x;
        float size_y;
        int pos_x;
        int pos_y;
        int last;
    } image;

    struct image_pause {
        sfTexture *texture;
        sfSprite *sprite;
        float size_x;
        float size_y;
        int pos_x;
        int pos_y;
    };
    typedef struct image_pause image_pause;

    struct image_status {
        sfTexture *texture;
        sfSprite *sprite;
        float size_x;
        float size_y;
        int pos_x;
        int pos_y;
    };
    typedef struct image_status image_status;

    typedef struct fight_struct {
        sfText *text;
        sfTexture *texture;
        sfSprite *sprite;
        float size_x;
        float size_y;
        int pos_x;
        int pos_y;
    } s_fight;

    typedef struct fight_stats {
        int attack;
        int attacked;
        int fight;
        int my_health;
        int enemy_health;
        int defense;
        int win;
    } s_fight_stats;

    typedef struct game_music {
        sfMusic *music;
        float level;
    } s_music;

    typedef struct collision_house {
        sfVector2i **pos1;
        int size_1;
        sfVector2i **pos2;
        int size_2;
        sfVector2i **pos3;
        int size_3;
    } s_col_house;

    typedef struct stats_struct {
        int level;
        sfText *level_txt;
        int strengh;
        sfText *strengh_txt;
        int wisdom;
        sfText *wisdom_txt;
        int points;
        sfText *points_txt;
    } s_stats;

    typedef struct npc_struct {
        sfText *ragnar_talk;
        sfText *lucien_talk;
        sfText *alys_talk;
        sfText *boss_talk;
        sfText *ragnar_hello;
        sfText *lucien_hello;
        sfText *alys_hello;
        sfText *boss_hello;
    } s_npc;

    typedef struct npc_images {
        sfTexture *texture;
        sfSprite *sprite;
        float size_x;
        float size_y;
        int pos_x;
        int pos_y;
    } s_npc_img;

    typedef struct main_game_struct {
        framebuffer_c f_buffer;
        sfEvent event;
        image *img;
        s_stats stats;
        image_pause *img_pause;
        image_status *img_status;
        s_fight *fight;
        s_fight_stats fight_stats;
        s_music my_music;
        s_col_house col_house;
        s_npc npc;
        s_npc_img *npc_img;
    } main_game_struct;

#endif
